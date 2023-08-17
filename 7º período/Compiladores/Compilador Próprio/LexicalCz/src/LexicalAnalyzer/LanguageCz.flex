package LexicalAnalyzer;

import static LexicalAnalyzer.Token.*;

%%
%{
    private void imprimir(String token, String lexema) {
        System.out.println(lexema + " -> Token: " + token);
    }
%}

%class Lexer
%type Token
variableName = "&"{upperCase}+({upperCase} | {number} | {lowerCase} | {underline})*
functionName = "@"{upperCase}+({upperCase} | {lowerCase} | {underline})*
upperCase = [A-Z]
lowerCase = [a-z]
underline = "_"
number = [0-9]
integer = {number}+
decimal = {integer}"."{integer}
const_numerica = integer | decimal
quote = "\'"
caracterqq = [alfabeto]+
const_literal = quote (caracterqq)*  quote  
whitespace = [\t\n\r]+
keywords =   "brk" | "cs" | "cst" | "dflt" | "d" | "ls" | "fr" | "f"| "rtrn" | "strct" | "swtch" | "vd" | "whl" | "string" | "boolean" | "float"  | "int"
%%

{keywords}      { imprimir("Palavra-chave",yytext()); return KEYWORD; }
{variableName}  { imprimir("Nome variável",yytext()); return VARIABLE_NAME; }
{functionName}  { imprimir("Nome função",yytext()); return FUNCTION_NAME; }
{integer}       { imprimir("Número inteiro",yytext()); return INTEGER; }
{decimal}       { imprimir("Número decimal",yytext()); return DECIMAL; }

{whitespace}    { return WHITESPACE; }
.               { imprimir ("Caracter Inválido!!! ",yytext()); return ERROR; }
<<EOF>>         { return null; }

// {variableName}    { imprimir("VARIAVEL: ",yytext()); return NOME_VARIAVEL; }
// {inteiro}         { imprimir("NUMERO INTEIRO: ",yytext()); return INT; }
// {decimal}         { imprimir("NUMERO DECIMAL: ",yytext()); return DEC; }
// {blocoComentario} { imprimir("COMENTARIO: ",yytext()); return COMENTARIO; }
// {linhaComentario} { imprimir("COMENTARIO: ",yytext()); return COMENTARIO; }