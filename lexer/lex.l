

%{
   #include "tokens-manual.h"
   int lineno;
   struct yylval {
    char *string_literal;
    int integer;
    char *type;
   };
   struct yylval yylval;
        
        
%}

DIGIT [1-9]+[0-9]*
DIGITFLOAT [0-9]
OCTAL 0[1-7]*
HEX 0[xX][0-9|a-f|A-F]+
LONG [lL]
LONGLONG  [(LL)|(ll)]
UNSIGNED [uU]
EXP [eE][+-]?{DIGITFLOAT}+
P [pP][+-]*{DIGITFLOAT}+
DOTTEDDIGITS (DIGITFLOAT+\.DIGITFLOAT*)|(DIGITFLOAT*\.DIGITFLOAT+)
%%


\n                  { lineno++; }
{DIGIT} { yylval.integer = atoi(yytext); yylval.type = "int"; return NUMBER; }
{DIGIT}{LONG} { yylval.integer = atoi(yytext); yylval.type = "int, long"; return NUMBER; }
{DIGIT}{LONGLONG} { yylval.integer = atoi(yytext); yylval.type = "int, longlong"; return NUMBER; }
{DIGIT}{UNSIGNED} { yylval.integer = atoi(yytext); yylval.type = "int, unsigned"; return NUMBER; }
{DIGIT}{UNSIGNED}{LONG}  { yylval.integer = atoi(yytext); yylval.type = "int, unsigned long"; return NUMBER; }
{DIGIT}{UNSIGNED}{LONGLONG}                 { yylval.integer = atoi(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }

{HEX} { yylval.integer = atoi(yytext);  yylval.type = "int"; return NUMBER; }
{HEX}{LONG} { yylval.integer = atoi(yytext); yylval.type = "int, long"; return NUMBER; }
{HEX}{LONGLONG} { yylval.integer = atoi(yytext); yylval.type = "int, longlong"; return NUMBER; }
{HEX}{UNSIGNED} { yylval.integer = atoi(yytext); yylval.type = "int, unsigned"; return NUMBER; }
{HEX}{UNSIGNED}{LONG} { yylval.integer = atoi(yytext); yylval.type = "int, unsigned long"; return NUMBER; }
{HEX}{UNSIGNED}{LONGLONG} { yylval.integer = atoi(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }

{OCTAL} { yylval.integer = atoi(yytext); yylval.type = "int"; return NUMBER; }
{OCTAL}{LONG} { yylval.integer = atoi(yytext); yylval.type = "int, long"; return NUMBER; }
{OCTAL}{LONGLONG} { yylval.integer = atoi(yytext); yylval.type = "int, longlong"; return NUMBER; }
{OCTAL}{UNSIGNED} { yylval.integer = atoi(yytext); yylval.type = "int, unsigned"; return NUMBER; }
{OCTAL}{UNSIGNED}{LONG} { yylval.integer = atoi(yytext); yylval.type = "int, unsigned long"; return NUMBER; }
{OCTAL}{UNSIGNED}{LONGLONG} { yylval.integer = atoi(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }

{DOTTEDDIGITS}{EXP}?
{DOTTEDDIGITS}{EXP}?[Ff]
{DOTTEDDIGITS}{EXP}?[Ll]

{DIGITFLOAT}+{EXP}
{DIGITFLOAT}+{EXP}[Ff]
{DIGITFLOAT}+{EXP}[Ll]

[ \n\t\r\v\f]+      { printf("white space"); }
"auto"              { return AUTO; }
"_Bool"             { return _BOOL; }
"break"             { return BREAK; }
"case"              { return CASE; }
"char"              { return CHAR; }
"_Complex"          { return _COMPLEX; } 
"const"             { return CONST;}
"continue"          { return CONTINUE; }
"default"           { return DEFAULT; }
"do"                { return DO; }
"double"            { return DOUBLE; }
"else"              { return ELSE; }
"enum"              { return ENUM; }
"extern"            { return EXTERN; }
"float"             { return FLOAT; }
"for"               { return FOR; }
"goto"              { return GOTO; }
"if"                { return IF; }
"_Imaginary"        { return _IMAGINARY; }
"inline"            { return INLINE; }
"int"               { return INT; }
"long"              { return LONG; }
"register"          { return REGISTER; }
"restrict"          { return RESTRICT; }
"return"            { return RETURN; }
"short"             { return SHORT; }
"signed"            { return SIGNED; }
"sizeof"            { return SIZEOF; }
"static"            { return STATIC; }
"struct"            { return STRUCT; }
"switch"            { return SWITCH; }
"typedef"           { return TYPEDEF; }
"union"             { return UNION; }
"unsigned"          { return UNSIGNED; }
"void"              { return VOID; }
"volatile"          { return VOLATILE; }
"while"             { return WHILE; }
  
"->"                { return INDSEL;  } 
"++"                { return PLUSPLUS; }
"--"                { return MINUSMINUS; }
"<<"                { return SHL; }
">>"                { return SHR; }
"<="                { return LTEQ; }
">="                { return GTEQ; }
"=="                { return EQEQ; }
"!="                { return NOTEQ; }
"&&"                { return LOGAND; }
"||"                { return LOGOR; }
"..."               { return ELLIPSIS; }
"*="                { return TIMESEQ; }
"/="                { return DIVEQ; }
"%="                { return MODEQ; }
"+="                { return PLUSEQ; }
"-="                { return MINUSEQ; }
"<<="               { return SHLEQ; }
">>="               { return SHREQ; }
"&="                { return ANDEQ; }
"|="                { return OREQ; }
"^="                { return XOREQ; }


"!"                 { return '!'; }
"^"                 { return '^'; }
"&"                 { return '&'; }
"*"                 { return '*'; }
"-"                 { return '-'; }
"+"                 { return '+'; }              
"="                 { return '='; }
"~"                 { return '~'; }
"|"                 { return '|'; }
"."                 { return '.'; }
"<"                 { return '<'; }
">"                 { return '>'; }
"/"                 { return '/'; }
"?"                 { return '?'; }
"("                 { return '('; }
")"                 { return ')'; }
"["                 { return '['; }
"]"                 { return ']'; }
","                 { return ','; }
";"                 { return ';'; }
":"                 { return ':'; }     

[_a-zA-Z][_a-zA-Z0-9]+       { yylval.string_literal = strdup(yytext); return IDENT; /* put somewhere */ }
.                           { printf("Error unrecognized token\n"); }
%%
int yywrap() {}
int main() {
int t = yylex();
int x = 0;
if(t && x == 0)
{printf("%d %s %d\n", t, yylval.string_literal, yylval.integer);
    x++;
}
}
