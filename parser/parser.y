%debug
%define parse.error verbose
%{

    #define YYDEBUG 1
   #include <stdlib.h>
   #include <stdio.h>
   #include <ctype.h>
   #include "ast.h"
  int yylex();
  void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 }
  // typedef union yylval YYSTYPE;
%}
%union{
    char *string_literal;
    char charlit;
    struct Num {
        unsigned long long integer;
        long double fvalue;
        enum {
            INT_SIGNED,
            INT_LONG,
            INT_LONGLONG,
            INT_UNSIGNED,
            INT_ULONG,
            INT_ULONGLONG,
            FLOATV,
            DOUBLEV,
            DOUBLE_LONG,
        } type;
    } num;
    int op;
    struct astnode *astnode_p;
}

%token <string_literal> IDENT <charlit> CHARLIT <string_literal> STRING <num> NUMBER 
%token INDSEL PLUSPLUS MINUSMINUS SHL SHR LTEQ GTEQ EQEQ NOTEQ LOGAND LOGOR ELLIPSIS TIMESEQ DIVEQ MODEQ PLUSEQ MINUSEQ SHLEQ SHREQ ANDEQ OREQ XOREQ AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INLINE INT LONG REGISTER RESTRICT RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE _BOOL _COMPLEX _IMAGINARY
%token '!' '^' '&' '*' '-' '+' '=' '~' '|' '.' '<' '>' '/' '?' '(' ')' '[' ']' '{' '}' '%' ',' ';' ':'
%type <astnode_p> primary-expression assignment-expression
%type <astnode_p> expression postfix-expression expression-list
%type <astnode_p> unary-expression cast-expression mult-expression add-expression shift-expression
%type <astnode_p> relational-expression equality-expression
%type <astnode_p> bitwise-or-expression bitwise-xor-expression bitwise-and-expression
%type <astnode_p> logical-or-expression logical-and-expression conditional-expression 

%type <op> unary-operator assignment-operator

// %left ','
// %right '=' PLUSEQ MINUSEQ TIMESEQ DIVEQ MODEQ SHLEQ SHREQ ANDEQ XOREQ OREQ
// %right '?' ':'
// %left LOGOR
// %left LOGAND
// %left '|'
// %left '^'
// %left '&' 
// %left EQEQ NOTEQ
// %left '<' LTEQ '>' GTEQ
// %left SHL SHR
// %left '+' '-'
// %left '*' '/' '%'
// %left '!' '~' SIZEOF MINUSMINUS PLUSPLUS
// %left '.' INDSEL '(' ')' '[' ']'

%% /*RULES */

exprstmtlist: expression ';' { astwalk_impl($1, 0); }
        | exprstmtlist expression ';'  { astwalk_impl($2, 0);}
        ;

expression: assignment-expression         { $$ = $1; }
                    | expression ',' assignment-expression { $$ = newast(AST_NODE_TYPE_BINOP, $1, $3, ','); }
                    ;

primary-expression: IDENT                   { $$ = newIdent(AST_NODE_TYPE_IDENT, $1);}
                |   NUMBER                  { $$ = newNum(AST_NODE_TYPE_NUM, $1);
                                            
                                            }
                |   STRING                  { $$ = newIdent(AST_NODE_TYPE_STRING, $1);  }  
                |   CHARLIT                 { $$ = newCharlit(AST_NODE_TYPE_CHARLIT, $1);  }
                |   '(' expression ')'      { $$ = $2;  }
                ;

postfix-expression: primary-expression { $$ = $1; }
                |   postfix-expression '[' expression ']' { struct astnode *ast = newast(AST_NODE_TYPE_BINOP, $1, $3, '+'); $$ = newast(AST_NODE_TYPE_UNOP, ast, NULL, '*'); }
                |   postfix-expression '.' IDENT { $$ = newast(AST_NODE_TYPE_BINOP, $1, newIdent(AST_NODE_TYPE_IDENT, $3), '.'); }
                |   postfix-expression INDSEL IDENT { struct astnode *ast = newast(AST_NODE_TYPE_UNOP, $1, NULL, '*'); $$ = newast(AST_NODE_TYPE_BINOP, ast, newIdent(AST_NODE_TYPE_IDENT, $3), '.' ); }    
                |   postfix-expression '(' expression-list ')' { $$ = newast(AST_NODE_TYPE_FN, $1, $3, '0'); } 
                |   postfix-expression '(' ')' { $$ = newast(AST_NODE_TYPE_FN, $1, NULL, '0');  }
                |   postfix-expression PLUSPLUS { $$ = newast(AST_NODE_TYPE_UNOP, $1, NULL, POSTINC); }
                |   postfix-expression MINUSMINUS { $$ = newast(AST_NODE_TYPE_UNOP, $1, NULL, POSTDEC); }   

expression-list: assignment-expression  { $$ =  insertElementorig(AST_NODE_TYPE_LL, $1); }
                | expression-list ',' assignment-expression { $$ = insertElement(AST_NODE_TYPE_LL, $1, $3);  }
                


unary-expression: postfix-expression {$$ = $1; }
                | PLUSPLUS   unary-expression { struct Num num; num.type = INT_SIGNED; num.integer = 1; $$ = newast(AST_NODE_TYPE_BINOP, $2, newNum(AST_NODE_TYPE_NUM, num), PLUSEQ );  }
                | MINUSMINUS unary-expression {struct Num num; num.type = INT_SIGNED; num.integer = 1; $$ = newast(AST_NODE_TYPE_BINOP, $2, newNum(AST_NODE_TYPE_NUM, num), MINUSEQ); }
                | unary-operator cast-expression { $$ = newast(AST_NODE_TYPE_UNOP, $2, NULL, $1); }
                | SIZEOF '(' expression ')' { $$ = newast(AST_NODE_TYPE_UNOP, $3, NULL, SIZEOF);  }
                ;

unary-operator: '-' { $$ = '-'; }
                | '+' { $$ = '+';  }
                | '!' {$$ = '!'; }
                | '~' {$$ = '~'; }
                | '&' {$$ = '&'; }
                | '*' {$$ = '*'; } 

cast-expression: unary-expression {$$ = $1; }
                ;//add typename later

mult-expression: cast-expression { $$ = $1; }
                | mult-expression '*' cast-expression { $$ = newast(AST_NODE_TYPE_BINOP, $1, $3, '*'); }
                | mult-expression '/' cast-expression {$$ = newast(AST_NODE_TYPE_BINOP, $1, $3, '/'); }
                | mult-expression '%' cast-expression { $$ = newast(AST_NODE_TYPE_BINOP, $1, $3, '%'); }
                ;

add-expression: mult-expression { $$ = $1; }
                | add-expression '+' mult-expression { $$ = newast(AST_NODE_TYPE_BINOP, $1, $3, '+'); }
                | add-expression '-' mult-expression  { $$ = newast(AST_NODE_TYPE_BINOP, $1, $3, '-'); }
                ;

shift-expression: add-expression { $$ = $1; }
                | shift-expression SHL add-expression {$$ = newast(AST_NODE_TYPE_BINOP, $1, $3, SHL); }
                | shift-expression SHR add-expression { $$ = newast(AST_NODE_TYPE_BINOP, $1, $3, SHR); }
                ;

relational-expression: shift-expression {$$ = $1; }
                | relational-expression '<' shift-expression {$$ = newast(AST_NODE_TYPE_BINOP, $1, $3, '<');}
                | relational-expression LTEQ shift-expression {$$ = newast(AST_NODE_TYPE_BINOP, $1, $3, LTEQ);}
                | relational-expression '>' shift-expression {$$ = newast(AST_NODE_TYPE_BINOP, $1, $3, '>');}
                | relational-expression GTEQ shift-expression {$$ = newast(AST_NODE_TYPE_BINOP, $1, $3, GTEQ);}
                ;

equality-expression: relational-expression {$$ = $1; }
                | equality-expression EQEQ relational-expression {$$ = newast(AST_NODE_TYPE_BINOP, $1, $3, EQEQ);}
                | equality-expression NOTEQ relational-expression { $$ = newast(AST_NODE_TYPE_BINOP, $1, $3, NOTEQ); }
                ;

bitwise-or-expression: bitwise-xor-expression {$$ = $1; }
                | bitwise-or-expression '|' bitwise-xor-expression {$$ = newast(AST_NODE_TYPE_BINOP, $1, $3, '|');}
                ;

bitwise-xor-expression: bitwise-and-expression {$$ = $1;  }
                | bitwise-xor-expression '^' bitwise-and-expression {$$ = newast(AST_NODE_TYPE_BINOP, $1, $3, '^');}
                ;

bitwise-and-expression: equality-expression {$$ = $1; }
                | bitwise-and-expression '&' equality-expression {$$ = newast(AST_NODE_TYPE_BINOP, $1, $3, '&');}
                ;

logical-or-expression:  logical-and-expression {$$ = $1; }
                     |   logical-or-expression LOGOR logical-and-expression {$$ = newast(AST_NODE_TYPE_BINOP, $1, $3, LOGOR);}
                     ;
    
logical-and-expression: bitwise-or-expression { $$ = $1; }
                     | logical-and-expression LOGAND bitwise-or-expression {$$ = newast(AST_NODE_TYPE_BINOP, $1, $3, LOGAND);}
                     ;
                     
conditional-expression: logical-or-expression {  $$ = $1; }
                        | logical-or-expression '?' expression ':' conditional-expression { $$ = newTenop(AST_NODE_TYPE_TENOP, $1, $3 , $5); }
                        ;

assignment-expression: conditional-expression { $$ =  $1; }
                        | unary-expression assignment-operator assignment-expression {$$ = newast(AST_NODE_TYPE_BINOP, $1, $3, $2); }
                        ;
                    

assignment-operator: '=' {$$ = '='; }
                    | PLUSEQ { $$ = PLUSEQ; }
                    | MINUSEQ {$$ = MINUSEQ; }
                    | TIMESEQ {$$ = TIMESEQ; }
                    | DIVEQ {$$ = DIVEQ; }
                    | MODEQ { $$ = MODEQ; }
                    | SHLEQ { $$ = SHLEQ; }
                    | SHREQ { $$ = SHREQ; }
                    | ANDEQ { $$ = ANDEQ; }
                    | OREQ {$$ = OREQ; }
                    | XOREQ { $$ = XOREQ; }
                    ;


                        
                        
                    

%%       
    int main() {
        yydebug = 0;

  
 yyparse();
  
        
        return 1;
        
    }