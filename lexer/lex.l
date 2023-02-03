

%{
   #include "tokens-manual.h"
   int lineno;
%}

%%
\n                  {lineno++;}
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


[a-zA-Z0-9_]+       {return IDENT; /* put somewhere */ }
%%
int yywrap() {}
int main() {
int t = yylex();
int x = 0;
if(t && x == 0)
{printf("%d\n", t);
    x++;
}
}
