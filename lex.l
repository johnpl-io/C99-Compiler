

%{
   #include "tokens-manual.h"
%}

%%
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
