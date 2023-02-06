

%{
   #include <stdlib.h>
   #include <stdio.h>
   #include "tokens-manual.h"
   int get_line_info();
   int handle_error();
   int lineno;
  
   struct yylval {
    char *string_literal;
    int long long integer;
    char *type;
    long double finteger;
   };
   struct yylval yylval;
        
        
%}

DIGIT                            [1-9]+[0-9]*
DIGITFLOAT                       [0-9]
OCTAL                            0[1-7]*
HEX                              0[xX][0-9|a-f|A-F]+
LONG                             [lL]
LONGLONG                         [(LL)|(ll)]
UNSIGNED                         [uU]
EXP                              [eE][+-]?{DIGITFLOAT}+
P                                [pP][+-]?{DIGITFLOAT}+
DOTTEDDIGITS                     ([0-9]+\.[0-9]*)|([0-9]*\.[0-9]+)
HEXDOTTEDDIGITS                  0[xX]([0-9|a-f|A-F]+\.[0-9|a-f|A-F]*)|([0-9|a-f|A-F]*\.[0-9|a-f|A-F]+)


ESCSEQ                           \\[abfnrtv'"\?\\]
OCTESC                           \\[0-7]{1,3}
HEXESC                           \\x[0-9a-fA-F]{1,2}
SC                               [^\n\\\']{1}
SCS                              [^\n\\\"]{1}
ANYTHING                         [.]
%x charseq
%x str
%x filename
%%
    char filename_buf[256];
    char *filename_buf_ptr;
    char string_buf[1024]; 
    char charvalue;
    char *string_buf_ptr;
    int char_count; 
    int count = 0;
\n                  { lineno++; }
"#"[ ][0-9]+" \""  {filename_buf_ptr = filename_buf; lineno = 0;  BEGIN(filename);  }


<filename>\" { 
    count++;
    if(count == 1) {
     *filename_buf_ptr = '\0'; printf("%s", filename_buf); 
    }
}
<filename>\n {BEGIN(INITIAL); }
<filename>. { *filename_buf_ptr++ = yytext[0];  }



{DIGIT}                         { yylval.integer = atoi(yytext); yylval.type = "int"; return NUMBER; }
{DIGIT}{LONG}                   { yylval.integer = atol(yytext); yylval.type = "int, long"; return NUMBER; }
{DIGIT}{LONGLONG}               { yylval.integer = atoll(yytext); yylval.type = "int, longlong"; return NUMBER; }
{DIGIT}{UNSIGNED}               { yylval.integer = strtoul(yytext, NULL, 10); yylval.type = "int, unsigned"; return NUMBER; }
{DIGIT}{UNSIGNED}{LONG}         { yylval.integer = strtoul(yytext, NULL, 10); yylval.type = "int, unsigned long"; return NUMBER; }
{DIGIT}{UNSIGNED}{LONGLONG}     { yylval.integer = strtoull(yytext, NULL, 10); yylval.type = "int, unsigned longlong"; return NUMBER; }

{HEX}                           { yylval.integer = strtoul(yytext, NULL, 16);  yylval.type = "int"; return NUMBER; }
{HEX}{LONG}                     { yylval.integer = strtoul(yytext, NULL, 16); yylval.type = "int, long"; return NUMBER; }
{HEX}{LONGLONG}                 { yylval.integer = strtoull(yytext, NULL, 16); yylval.type = "int, longlong"; return NUMBER; }
{HEX}{UNSIGNED}                 { yylval.integer = strtoul(yytext, NULL, 16); yylval.type = "int, unsigned"; return NUMBER; }
{HEX}{UNSIGNED}{LONG}           { yylval.integer = strtoull(yytext, NULL, 16); yylval.type = "int, unsigned long"; return NUMBER; }
{HEX}{UNSIGNED}{LONGLONG}       { yylval.integer = strtoull(yytext, NULL, 16); yylval.type = "int, unsigned longlong"; return NUMBER; }

{OCTAL}                         { yylval.integer = strtoul(yytext, NULL, 8); yylval.type = "int"; return NUMBER; }
{OCTAL}{LONG}                   { yylval.integer = strtoul(yytext, NULL, 8); yylval.type = "int, long"; return NUMBER; }
{OCTAL}{LONGLONG}               { yylval.integer = strtoull(yytext, NULL, 8); yylval.type = "int, longlong"; return NUMBER; }
{OCTAL}{UNSIGNED}               { yylval.integer = strtoull(yytext, NULL, 8); yylval.type = "int, unsigned"; return NUMBER; }
{OCTAL}{UNSIGNED}{LONG}         { yylval.integer = strtoull(yytext, NULL, 8); yylval.type = "int, unsigned long"; return NUMBER; }
{OCTAL}{UNSIGNED}{LONGLONG}     { yylval.integer = strtoull(yytext, NULL, 8); yylval.type = "int, unsigned longlong"; return NUMBER; }

{DOTTEDDIGITS}{EXP}?            { yylval.finteger = atof(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }
{DOTTEDDIGITS}{EXP}?[Ff]        { yylval.finteger = atof(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }
{DOTTEDDIGITS}{EXP}?[Ll]        { yylval.finteger = atof(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }

{DIGITFLOAT}+{EXP}              { yylval.finteger = atof(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }
{DIGITFLOAT}+{EXP}[Ff]          { yylval.finteger = atof(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }
{DIGITFLOAT}+{EXP}[Ll]          { yylval.finteger = atof(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }

{HEXDOTTEDDIGITS}{P}      { yylval.finteger = strtod(yytext, NULL); yylval.type = "int, unsigned longlong"; return NUMBER; }
{HEXDOTTEDDIGITS}{P}[Ff]  { yylval.finteger = strtold(yytext, NULL); yylval.type = "int, unsigned longlong"; return NUMBER; }
{HEXDOTTEDDIGITS}{P}[Ll] { yylval.finteger = strtold(yytext, NULL); yylval.type = "int, unsigned longlong"; return NUMBER; }

\'   {   char_count = 0; BEGIN(charseq); }
<charseq>\'  { BEGIN(INITIAL); 
              if(char_count == 0) {
                fprintf(stderr, "Error multibyte char only first value was used \n");
              }  
              if(char_count > 1) {
                fprintf(stderr, "Error multibyte char only first value was used\n");
              }
              printf("%d", charvalue); //!!!!CHANGE TO RETURN AND SET YYVAL PROPERLY!!!
              }
<charseq>{OCTESC} {
    int result;
    if (char_count == 0) {
    printf("GETTING OCTAL\n");
    sscanf(yytext + 1, "%o", &result);
    charvalue = result; 
    }
    char_count++;
}
<charseq>\\[0-9]+ {
    printf("invalid octal");
}
<charseq>{HEXESC} {
      int result;
      yytext[0] = '0';
    if (char_count == 0) {
    printf("GETTING HEX\n");
    sscanf(yytext, "%x", &result);
    charvalue = result; 
    }
    char_count++;
    
}
<charseq>\\a  {  if(char_count == 0) charvalue = '\a'; char_count++; }
<charseq>\\b  {  if(char_count == 0) charvalue = '\b'; char_count++; }
<charseq>\\f  {  if(char_count == 0) charvalue = '\f'; char_count++; }
<charseq>\\r  {  if(char_count == 0) charvalue = '\r'; char_count++; }
<charseq>\\t  {  if(char_count == 0) charvalue = '\t'; char_count++; }
<charseq>\\v  {  if(char_count == 0) charvalue = '\v'; char_count++; }
<charseq>\\?  {  if(char_count == 0) charvalue = '\?'; char_count++; }
<charseq>\\'  {  if(char_count == 0) charvalue = '\''; char_count++; }
<charseq>\\n  {  if(char_count == 0) charvalue = '\n'; char_count++; }
<charseq>\\\\ {  if(char_count == 0) charvalue = '\\'; char_count++; }
<charseq>{SC} {
    int result;
    if(char_count == 0) {
        printf("GETTING SC \n"); 
        charvalue = yytext[0];
    }
    char_count++;
}

<charseq>(.|\n|\\|\') {
    printf("Error invalid value in char seq");
}    

\"  {string_buf_ptr = string_buf; BEGIN(str);}

<str>\" {BEGIN(INITIAL); 
    *string_buf_ptr = '\0';
  printf("%s\n", string_buf);
   }
<str>{OCTESC} {
    int result;
    sscanf(yytext+1, "%o", &result);
    *string_buf_ptr++ = result;

}
<str>{HEXESC} {
    int result;
    yytext[0] = '0';
    printf("GETTING HEX\n");
    sscanf(yytext, "%x", &result);
    *string_buf_ptr++ = result;
}
<str>{SCS} {
    *string_buf_ptr++ = yytext[0];
}
<str>(.|\n|\\|\") {
    printf("Error Invalid sequence in string\n");
}    
<str>\\a  {  *string_buf_ptr++ = '\a';}
<str>\\b  {   *string_buf_ptr++ = '\b';}
<str>\\f  {   *string_buf_ptr++ = '\f'; }
<str>\\r  {   *string_buf_ptr++ = '\r'; }
<str>\\t  {   *string_buf_ptr++ = '\t'; }
<str>\\v  {   *string_buf_ptr++ = '\v'; }
<str>\\?  {   *string_buf_ptr++ = '\?'; }
<str>\\\"  {   *string_buf_ptr++ = '\"'; }
<str>\\n  {   *string_buf_ptr++ = '\n'; }
<str>\\\\ {   *string_buf_ptr++ = '\\'; }


[ \t\r\v\f]+      { ; }
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
.                           { fprintf(stderr, "Error unrecognized token : %s\n", yytext); }
%%
int get_line_info(){
    printf("got here at least");
    lineno = 0;
    
}
// print filename, line number and the incorrect token
int handle_error(){
    fprintf(stderr, "Error in file %s on line number %d: %s\n", filename, lineno, yytext);
}

int yywrap() {}
int main() {
    int t;
while(t = yylex())  {
  
    switch(t) 
    {
        case AUTO: printf("Auto %d\n", lineno); break;
        case _BOOL: printf("_BOOL\n"); break;
        case BREAK: printf("Break \n"); break;
        case CASE: printf("Case \n"); break;
        case CHAR: printf("Char\n"); break;
        case _COMPLEX: printf("_COMPLEX\n"); break;
        case CONST: printf("Const\n"); break;
        case CONTINUE: printf("Continue\n"); break;
        case DEFAULT: printf("Default\n"); break;
        case DO: printf("Do\n"); break;
        case : printf("\n"); break;
        case : printf("\n"); break;
        case : printf("\n"); break;
        case : printf("\n"); break;
        case : printf("\n"); break;
        case : printf("\n"); break;
        //we have to add the rest 
        default: printf("sussy\n");
    }
}

}
