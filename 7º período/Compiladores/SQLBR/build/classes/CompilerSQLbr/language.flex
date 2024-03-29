package CompilerSQLbr;

import static CompilerSQLbr.Token.*;

%%
%{
    private void imprimir(String token, String lexema) {
        System.out.println(lexema + " =>" + token);
    }
%}
 
%class Lexer
%type Token
letra = [a-zA-Z]
digito = [0-9]
underline = "_"
identificador = {letra}+({letra} | {digito} | {underline})*
constante = {const_numerica} | {const_literal}
inteiro = {digito}+
decimal = {inteiro}"."{inteiro}
const_numerica = inteiro | decimal
aspasDuplas = "\""
caracterqq = [alfabeto]+
const_literal = aspasDupla (caracterqq)*  aspasDupla  
//const_literal = \” ( \\\” | [^\”\n\r] )* \”
operadoresAritmeticos = "\+" | "\-" | "\*" | "\/"
operadoresComparacao = "\<>" | "\<" | "\>" | "\<=" | "\>=" 
operadoresLogicos = ".E." | ".OU."
simbolosEspeciais = "\(" | "\)" | "\[" | "\]" | "\." | "\," | "\;"
palavrasChaves = "ABRIR_TABELA" | "MOSTRAR" | "DE" | "ONDE" | "ORDENAR_POR" | "DECRESCENTE" | "CRESCENTE" | "EM_CONJUNTO_COM" | "ATRAVES_DA_LIGACAO" | "UNIDA_COM" | "AGRUPAR POR" | "FILTRO_DO_GRUPO" | "CONTAR" | "MEDIA" | "VALOR_MINIMO" | "VALOR_MAXIMO" | "SOMATORIA" | "EH" | "VAZIO" | "CONTENDO"
branco = [\t|\n|\r | " "]+
%%

{palavrasChaves}        { imprimir("PALAVRA-CHAVE -----> ", yytext()); return PL; }
{identificador}         { imprimir("IDENTIFICADOR -----> ", yytext()); return ID; }
{const_literal}         { imprimir("CONSTANTE -----> ", yytext()); return CTE; } 
{inteiro}               { imprimir("NUMERO INTEIRO -----> ", yytext()); return INT; }
{decimal}               { imprimir("NUMERO DECIMAL -----> ", yytext()); return DEC; }
{operadoresAritmeticos} { imprimir("OPERADOR ARITM.-----> ", yytext()); return OPARITM; }
{operadoresComparacao}  { imprimir("OPERADOR COMP. -----> ", yytext());  return OPCOMP; }
{operadoresLogicos}     { imprimir("OPERADOR LOGICOS ---> ", yytext()); return OPLOG; }
{simbolosEspeciais}     { imprimir("SIMBOLOS ESPEC.-----> ", yytext()); return SIMB_ESPEC; }
{aspasDuplas}           { imprimir("ASPAS DUPLAS -----> ", yytext()); return ASPAS_DUPLAS; }
{branco}                { return BRANCO; }
.                       { imprimir ("<<< CARACTER INVALIDO!!! >>> ",yytext()); return ERROR; }
<<EOF>>                 { return null; }