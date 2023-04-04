
%debug
%define parse.error verbose
%{    
    #define YYDEBUG 1
    #include <stdlib.h>
    #include <stdio.h>
    #include <ctype.h>
    #include "ast.h"
    #include "symbtab.h"
    #include "symbtabinsert.h"
    int yylex();
    void yyerror (char const *s) {
        fprintf (stderr, "%s\n", s);
 }
    // typedef union yylval YYSTYPE

    // line number and filename for debugging
    extern char filename_buf[256];
    extern int lineno;
    int isFunc; 
    struct astnode *fn_parameters;

    // keep track of current scope, initially at global scope
    struct symbtab *current_scope;
    struct struct_stack *curstruct_scope;
    struct astnode *cur_struct;
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
%token INDSEL PLUSPLUS MINUSMINUS SHL SHR LTEQ GTEQ EQEQ NOTEQ LOGAND LOGOR ELLIPSIS TIMESEQ DIVEQ MODEQ PLUSEQ MINUSEQ SHLEQ SHREQ ANDEQ OREQ XOREQ AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INLINE INT LONG REGISTER RESTRICT RETURN SHORT SIGNED SIZEOF STATIC <op> STRUCT SWITCH TYPEDEF <op> UNION UNSIGNED VOID VOLATILE WHILE _BOOL _COMPLEX _IMAGINARY
%token '!' '^' '&' '*' '-' '+' '=' '~' '|' '.' '<' '>' '/' '?' '(' ')' '[' ']' '{' '}' '%' ',' ';' ':'
%type <astnode_p> primary-expression assignment-expression
%type <astnode_p> expression postfix-expression expression-list
%type <astnode_p> unary-expression cast-expression mult-expression add-expression shift-expression
%type <astnode_p> relational-expression equality-expression
%type <astnode_p> bitwise-or-expression bitwise-xor-expression bitwise-and-expression direct-declarator direct-abstract-declarator 
%type <astnode_p> logical-or-expression logical-and-expression conditional-expression abstract-declarator declaration init-declarator-list
%type <astnode_p> type-specifier storage-class-specifier type-qualifier declaration-specifiers type-qualifier-list declarator init-declarator pointer
%type <astnode_p> struct-declarator specifier-qualifier-list struct-declarator-list struct-or-union-specifier type-name parameter-declaration parameter-list parameter-type-list
%type <op> unary-operator assignment-operator struct-or-union 

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
start: declaration_or_fndef  { }
    | start declaration_or_fndef  { }
    ;

declaration_or_fndef: declaration { }
                    | function_definition
                    ;
function_definition: declaration-specifiers declarator { if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);}
                                                          symbent_combine($1, insertElementorig(AST_NODE_TYPE_LL, $2), lineno, filename_buf, current_scope, NULL);   
                                                          isFunc = 1; 
                                                          fn_parameters = $2;
                                                  
                                                           } 
                                                        compound_statement  { }
        ;


compound_statement: '{' 

                    { if(isFunc) {current_scope = symbtab_push(SCOPE_FUNCTION, current_scope, lineno, filename_buf);
                                   symbent_combine_fn(fn_parameters, lineno, filename_buf, current_scope);
                                    } 
                        else { current_scope = symbtab_push(SCOPE_BLOCK, current_scope, lineno, filename_buf);}
                        isFunc = 0;

                        fn_parameters = NULL;
                        
                    } 
                    decl_or_stmt_list  
                    {  current_scope = symbtab_pop(current_scope); }'}'  {  }  
        ;


decl_or_stmt_list: decl_or_stmt { }
        | decl_or_stmt_list decl_or_stmt  { }
        ;
decl_or_stmt:
        declaration {  }
        | stmt
        ;
stmt: compound_statement
   |  expression ';' {  }
        ;


primary-expression: IDENT                   { $$ = newIdent(AST_NODE_TYPE_IDENT, $1);}
                |   NUMBER                  { $$ = newNum(AST_NODE_TYPE_NUM, $1);}
                |   STRING                  { $$ = newIdent(AST_NODE_TYPE_STRING, $1); /*
                this needs to be changed to some string type after lexer is fixed with this (see hak email) */
                 }  
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
                ;

expression-list: assignment-expression  { $$ =  insertElementorig(AST_NODE_TYPE_LL, $1); }
                | expression-list ',' assignment-expression { $$ = insertElement(AST_NODE_TYPE_LL, $1, $3);  }
                ; 


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
                ;
cast-expression: unary-expression {$$ = $1; }
               | SIZEOF '(' type-name ')' { }
               ;


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
expression: assignment-expression         { $$ = $1; }
                    | expression ',' assignment-expression { $$ = newast(AST_NODE_TYPE_BINOP, $1, $3, ','); }
                    ;   
/* Assignment 3 - Declarations */


/* 6.7.0 ? */
declaration: declaration-specifiers init-declarator-list ';' {  if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);}
                                                          symbent_combine($1, $2, lineno, filename_buf, current_scope, NULL);   }
    | declaration-specifiers ';'  { if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);} symbent_struct_reset($1, lineno, filename_buf, current_scope); }
    ;

declaration-specifiers: storage-class-specifier declaration-specifiers {   $$ = newast(AST_NODE_TYPE_DECLSPEC, $1, $2, 0);}
    | storage-class-specifier  { $$ = newDecl(AST_NODE_TYPE_DECLSPEC, $1);  }
    | type-specifier declaration-specifiers { $$ = newast(AST_NODE_TYPE_DECLSPEC, $1, $2, 0);   }
    | type-specifier { $$ = newDecl(AST_NODE_TYPE_DECLSPEC, $1);  } 
    | type-qualifier declaration-specifiers { $$ = newast(AST_NODE_TYPE_DECLSPEC, $1, $2, 0);  }
    | type-qualifier { $$ = newDecl(AST_NODE_TYPE_DECLSPEC, $1);  }
    | function-specifier declaration-specifiers { } 
    | function-specifier { /*$$ = newDecl(ASTNODE_NODE_TYPE_DECLSPEC, $1);  */ }
    ;

init-declarator-list: init-declarator { $$ =  insertElementorig(AST_NODE_TYPE_LL, $1);  }
    | init-declarator-list ',' init-declarator { $$ = insertElement(AST_NODE_TYPE_LL, $1, $3); }
    ;
    
init-declarator: declarator { $$ = $1;  }
    | declarator '=' initializer {/* do not have to do yet */ }
    ;
                        
/* 6.7.1 */

storage-class-specifier: TYPEDEF {$$ = newType(AST_NODE_TYPE_STORAGE, TYPEDEF_S);}
                    |    EXTERN {$$ = newType(AST_NODE_TYPE_STORAGE, EXTERN_S);}
                    |    STATIC  {$$ = newType(AST_NODE_TYPE_STORAGE, STATIC_S);}
                    |    AUTO {$$ = newType(AST_NODE_TYPE_STORAGE, AUTO_S);}
                    |    REGISTER {$$ = newType(AST_NODE_TYPE_STORAGE, REGISTER_S);}
                    ;

/* 6.7.2 */

type-specifier: VOID {$$ = newType(AST_NODE_TYPE_SCALAR,VOID); }
            |   CHAR { $$ = newType(AST_NODE_TYPE_SCALAR,CHAR);}
            |   SHORT {$$ = newType(AST_NODE_TYPE_SCALAR,SHORT);}
            |   INT   {$$ = newType(AST_NODE_TYPE_SCALAR,INT); }
            |   LONG     {$$ = newType(AST_NODE_TYPE_SCALAR,LONG);}
            |   FLOAT  {$$ = newType(AST_NODE_TYPE_SCALAR,FLOAT);}
            |   DOUBLE   {$$ = newType(AST_NODE_TYPE_SCALAR,DOUBLE);}
            |   SIGNED   {$$ = newType(AST_NODE_TYPE_SCALAR,SIGNED);}
            |   UNSIGNED     {$$ = newType(AST_NODE_TYPE_SCALAR,UNSIGNED);}
            |   _BOOL    { $$ = newType(AST_NODE_TYPE_SCALAR, _BOOL); }
            |   _COMPLEX    { }
            |  _IMAGINARY  { }
            | struct-or-union-specifier { $$ = $1; }
            | enum-specifier
        /*    | typedef-name */ 
            ;

/* 6.7.2.1 */

struct-or-union-specifier: struct-or-union IDENT {            
    if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf); }
    if(!curstruct_scope) { 
        cur_struct = newStructUnion($1, $2, symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1);
        curstruct_scope =  struct_stack_init(cur_struct);
        } else {
            curstruct_scope = struct_push(curstruct_scope, newStructUnion($1, $2, symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1));
        }
         symbent_struct(curstruct_scope->astnode, current_scope, lineno,  filename_buf, curstruct_scope->astnode->structunion.name, false); 
         
        }
        
        
        '{' struct-declaration-list {  curstruct_scope->astnode->structunion.is_complete = 1; curstruct_scope = struct_pop(curstruct_scope); printf("ISCOMPLETE"); } '}' {    $$ = cur_struct;  }
                        |  struct-or-union  {
    if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf); }
    if(!curstruct_scope) { 
        cur_struct = newStructUnion($1, NULL, symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1);
        curstruct_scope =  struct_stack_init(cur_struct);
        } else {
            curstruct_scope = struct_push(curstruct_scope, newStructUnion($1, NULL, symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1));
        }
        
                            
                        } '{'  struct-declaration-list {curstruct_scope->astnode->structunion.is_complete = 1; curstruct_scope = struct_pop(curstruct_scope); printf("ISCOMPLETE"); }'}' { $$ = cur_struct;  }
                        |  struct-or-union IDENT { $$ = newStructUnion($1, $2, NULL, filename_buf, lineno, 0);   }
                        ;

struct-or-union: STRUCT { $$ = STRUCT; }
                | UNION { $$ =  UNION; }
                ;
                
struct-declaration-list: struct-declaration {  
    /* install members in struct scope here */
}
                        | struct-declaration-list struct-declaration
                          ;
                        
struct-declaration: specifier-qualifier-list struct-declarator-list ';' { symbent_combine($1, $2, lineno, filename_buf, cur_struct->structunion.minitable, current_scope);    } ;
                    

specifier-qualifier-list: type-specifier specifier-qualifier-list { $$ = newast(AST_NODE_TYPE_DECLSPEC, $1, $2, 0); }
                        | type-specifier { $$ = newDecl(AST_NODE_TYPE_DECLSPEC, $1); }
                        | type-qualifier specifier-qualifier-list { $$ = newast(AST_NODE_TYPE_DECLSPEC, $1, $2, 0); }
                        | type-qualifier { $$ = newDecl(AST_NODE_TYPE_DECLSPEC, $1);  }
                        ;
struct-declarator-list: struct-declarator {  $$ =  insertElementorig(AST_NODE_TYPE_LL, $1); }
                       | struct-declarator-list ',' struct-declarator { $$ = insertElement(AST_NODE_TYPE_LL, $1, $3); }
                       ;
struct-declarator: declarator { $$ = $1;  }
                |  declarator ':' conditional-expression { 
                    /* not supporting bitfield */ 
                  }
                | ':' conditional-expression { 
                /* not supporting implicit bit field */
                 }
                ;

/* 6.7.2.2  Enumeration Specifiers */

enum-specifier: ENUM IDENT '{' enumerator-list '}'
            |   ENUM '{' enumerator-list ',' '}'
            |   ENUM IDENT
            ;
enumerator-list: enumerator
        | enumerator-list ',' enumerator
        ;

enumerator: IDENT
        | IDENT '=' conditional-expression
        ;
     
/* 6.7.3 Type Qualifier */

type-qualifier:  CONST {    $$ = newType(AST_NODE_TYPE_QUALIFIER, CONST); }
            |    RESTRICT {  $$ = newType(AST_NODE_TYPE_QUALIFIER, RESTRICT);}
            |    VOLATILE {   $$ = newType(AST_NODE_TYPE_QUALIFIER, VOLATILE);}
            ;
/* 6.7.4 */
    function-specifier: INLINE
        ;
               
/* 6.7.5 */
    declarator: pointer direct-declarator { $$ = insertElement(AST_NODE_TYPE_DECL, $2,  $1);   }
            | direct-declarator { $$ = $1; }
            ;

    direct-declarator: IDENT { $$ = newDeclar(AST_NODE_TYPE_DECL, $1);  } 
        | '(' declarator ')' { $$ = $2;  }
        | direct-declarator '[' type-qualifier-list assignment-expression ']'   { }  
        | direct-declarator '[' assignment-expression ']'  { $$ = insertElement(AST_NODE_TYPE_ARRAYDCL, $1,  newArrayDecl($3)); /* add array size */ }
        | direct-declarator '[' type-qualifier-list ']'  {}
        | direct-declarator '[' STATIC type-qualifier-list assignment-expression ']' {}
        | direct-declarator '[' STATIC assignment-expression ']'  {}
        | direct-declarator '[' type-qualifier-list STATIC assignment-expression ']' {}
        | direct-declarator '[' type-qualifier-list '*' ']'  { }
        | direct-declarator '[' '*' ']'   { /*  */ }
        | direct-declarator '[' ']' {$$ = insertElement(AST_NODE_TYPE_ARRAYDCL, $1,  newArrayDecl(NULL));}
        | direct-declarator '(' parameter-type-list ')' {  $$ = insertElement(AST_NODE_TYPE_FNDCL, $1,  newFunctDecl($3));  }
        | direct-declarator '(' identifier-list ')' { }
        | direct-declarator '(' ')' { $$ = insertElement(AST_NODE_TYPE_FNDCL, $1,  newFunctDecl(NULL)); }  
        ;

    pointer: '*' {  $$ =  newType(AST_NODE_TYPE_POINTER,  0);  }
        | '*' type-qualifier-list {  /*<-thing on right receives this */ }
        | '*' type-qualifier-list pointer {}
        | '*' pointer { struct astnode *temp = newType(AST_NODE_TYPE_POINTER,  0);  temp->ptr.next = $2; $$ = temp; }
        ;

    type-qualifier-list: type-qualifier {$$ = $1; }
        | type-qualifier-list type-qualifier { $$ = newast(AST_NODE_TYPE_QUALIFIER, $1, $2, 0); } 
        ;
    
    parameter-type-list: parameter-list { $$ = $1; }
        | parameter-list ',' ELLIPSIS
        ;
    
    parameter-list: parameter-declaration { $$ =  insertElementorig(AST_NODE_TYPE_LL, $1);  }
        | parameter-list ',' parameter-declaration { $$ = insertElement(AST_NODE_TYPE_LL, $1, $3); }
        ;
    
    parameter-declaration: declaration-specifiers declarator { $$ = newDeclaration(AST_NODE_TYPE_DECLARATION, $1, $2); }
        | declaration-specifiers abstract-declarator { $$ = newDeclaration(AST_NODE_TYPE_DECLARATION, $1, $2);  }
        | declaration-specifiers { $$ = newDeclaration(AST_NODE_TYPE_DECLARATION, NULL, $1); }
        ;
    
    identifier-list: IDENT { }
        | identifier-list ',' IDENT { }
        ;
    
    /* 6.7.6 */
    type-name: specifier-qualifier-list { $$ = $1; }
        | specifier-qualifier-list abstract-declarator
        ;
    
    abstract-declarator: pointer { $$ = insertElement(AST_NODE_TYPE_DECL, newDeclar(AST_NODE_TYPE_DECL, NULL), $1);  }
        | pointer direct-abstract-declarator {   $$ = insertElement(AST_NODE_TYPE_DECL, $2, $1); }
        | direct-abstract-declarator { $$ = $1; }
        ;
    
    direct-abstract-declarator: '(' abstract-declarator ')' { $$ =  $2; }
        | direct-abstract-declarator '[' assignment-expression ']' { $$ = insertElement(AST_NODE_TYPE_ARRAYDCL, $1,  newArrayDecl($3));}
        | direct-abstract-declarator '[' ']' {$$ = insertElement(AST_NODE_TYPE_ARRAYDCL, $1,  newArrayDecl(NULL));}
        | '[' assignment-expression ']' { $$ = insertElement(AST_NODE_TYPE_ARRAYDCL, newDeclar(AST_NODE_TYPE_DECL, NULL), newArrayDecl($2));  }
        | direct-abstract-declarator '[' '*' ']' {   }
        | '[' '*' ']' {  }
        | direct-abstract-declarator '(' parameter-type-list ')' { $$ = insertElement(AST_NODE_TYPE_FNDCL, $1,  newFunctDecl($3));  }
        | '(' parameter-type-list ')' { $$ = newDeclar(AST_NODE_TYPE_DECL, NULL);  $$ = insertElement(AST_NODE_TYPE_FNDCL, $$,  newFunctDecl($2));}
        | direct-abstract-declarator '(' ')' { $$ = insertElement(AST_NODE_TYPE_FNDCL, $1,  newFunctDecl(NULL));  }
        ;
    /* 6.7.7 */
   /* typedef-name: IDENT  */
        ;  
    
    /* 6.7.8 */
    
    initializer: assignment-expression
        | '{' initializer-list '}'
        | '{' initializer-list ',' '}'
        ;

    initializer-list: designation initializer
        | initializer
        | initializer-list ',' designation initializer
        | initializer-list ',' initializer
        ;
    
    designation: designator-list '='
        ;
    
    designator-list: designator
        | designator-list designator
        ;

    designator: '[' conditional-expression ']'
        | '.' IDENT
        ; 

%%       
    int main() {
        yydebug = 0;

  
 yyparse();
  
        
        return 1;
        
    }