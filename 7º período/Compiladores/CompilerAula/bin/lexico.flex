import java_cup.runtime.*;

%%
%public
%class Lexer
%line
%column
%type void

%{
    private void print(String token, String lexema) { System.out.println(token + " -> " + lexema); }
%}

letter = [a-zA-Z]
number = [0-9]
underline = "_"
hash = "#"
sign = "$"

variableName = {underline} ({letter} | {hash}) ({letter} | {hash})+
// variableName = {underline} ({letter} | {hash})+
functionName = {sign} ({letter} | {number}){2,4}

whitespace = [\n|\s|\t\r]+
%%

{variableName}  { print("Nome variável", yytext()); }
{functionName}  { print("Nome função", yytext()); }
// {whitespace}    { print("Espaço em branco", yytext()); }   
{whitespace}    {}
[^] { throw new Error("caracter inválido "+yytext()+" na linha "+(yyline+1)+", coluna "+(yycolumn+1) ); }

<<EOF>> {}




