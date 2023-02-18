%{
   #include <stdlib.h>
   #include <stdio.h>
   #include <ctype.h>
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
}

%token IDENT CHARLIT STRING <num.integer> NUMBER INDSEL PLUSPLUS MINUSMINUS SHL SHR LTEQ GTEQ EQEQ NOTEQ LOGAND LOGOR ELLIPSIS TIMESEQ DIVEQ MODEQ PLUSEQ MINUSEQ SHLEQ SHREQ ANDEQ OREQ XOREQ AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INLINE INT LONG REGISTER RESTRICT RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE _BOOL _COMPLEX _IMAGINARY


%left ','
%right '=' PLUSEQ MINUSEQ TIMESEQ DIVEQ MODEQ SHLEQ SHREQ ANDEQ XOREQ OREQ
%right '?' ':'
%left LOGOR
%left LOGAND
%left '|'
%left '^'
%left '&'
%left EQEQ NOTEQ
%left '<' LTEQ '>' GTEQ
%left SHL SHR
%left '+' '-'
 // issue with this shit
%left '*' '/' '%'
%left '!' '~' SIZEOF MINUSMINUS PLUSPLUS
%left '.' INDSEL '(' ')' '[' ']'

%% /*RULES */

primary-expression: IDENT
                |   NUMBER { int test = $1 + 1; printf("number %d", test); }
                |   STRING           
                ;



%%       
    int main() {
        yyparse();
        return 1;
    }