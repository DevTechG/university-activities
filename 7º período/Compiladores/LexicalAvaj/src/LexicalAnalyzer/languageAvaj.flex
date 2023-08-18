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
variableName = "$"{upperCase}+({upperCase} | {number} | {lowerCase} | {underline})*
functionName = "@"{upperCase}+({upperCase} | {lowerCase} | {underline})*
upperCase = [A-Z]
lowerCase = [a-z]
underline = "_"
number = [0-9]
// inteiro = [0-9]+
// decimal = [0-9]+["."]+[0-9]+
// blocoComentario = "/*" ~ "*/"
whitespace = [\t\n\r]+
// branco = \r|\n|\r\n | [ \t\f] +
// branco = [\r\n\t]+
// linhaComentario = {whitespace}* "//" .*
keywords =  "esle" | "fi" | "rof" | "elihw" | "od" | "float" | "bool" | "int" | "string" 
%%

{keywords}      { imprimir("Palavra-chave",yytext()); return KEYWORD; }
{variableName}  { imprimir("Nome variável",yytext()); return VARIABLE_NAME; }
{functionName}  { imprimir("Nome função",yytext()); return FUNCTION_NAME; }
{whitespace}    { return WHITESPACE; }
.               { imprimir ("Caracter Inválido!!! ",yytext()); return ERROR; }
<<EOF>>         { return null; }

// {variableName}    { imprimir("VARIAVEL: ",yytext()); return NOME_VARIAVEL; }
// {inteiro}         { imprimir("NUMERO INTEIRO: ",yytext()); return INT; }
// {decimal}         { imprimir("NUMERO DECIMAL: ",yytext()); return DEC; }
// {blocoComentario} { imprimir("COMENTARIO: ",yytext()); return COMENTARIO; }
// {linhaComentario} { imprimir("COMENTARIO: ",yytext()); return COMENTARIO; }