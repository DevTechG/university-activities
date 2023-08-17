package SyntaxAnalyzer;
import java_cup.runtime.*;

%%
%cup
%public
%class Lexer
%line
%column
%{
  private Symbol symbol(int type) { return new Symbol(type, yyline, yycolumn); }
  private Symbol symbol(int type, Object value) { return new Symbol(type, yyline, yycolumn, value);  }
%}

variableName = "&"{upperCase}+({upperCase} | {number} | {lowerCase} | {underline})*
functionName = "@"{upperCase}+({upperCase} | {lowerCase} | {underline})*
upperCase = [A-Z]
lowerCase = [a-z]
underline = "_"
number = [0-9]
const_number = {integer} | {decimal}
integer = {number}+
decimal = {integer}"."{integer}
quote = "\'"
alphanumeric = ({upperCase} | {number} | {lowerCase})*+
const_char = {quote} ({alphanumeric})*  {quote}  
whitespace = [\t |\n |\r]+
keywords =   "brk" | "cs" | "cst" | "dflt" | "d" | "ls" | "fr" | "f"| "rtrn" | "strct" | "swtch" | "vd" | "whl" | "string" | "boolean" | "float"  | "int"

%%

<YYINITIAL> {
    "main"      { return new Symbol(Sym.PROGRAMA); }
    "{"        { return new Symbol(Sym.INICIO); }
    "}"           { return new Symbol(Sym.FIM); }
    "int"           { return new Symbol(Sym.TIPO_INTEIRO); }
    "string"        { return new Symbol(Sym.TIPO_CHAR); }    
    ";"             { return new Symbol(Sym.PTVG); }        
    "="            { return new Symbol(Sym.SIMBOLO_ATRIB); }
    ","             {return new Symbol(Sym.VGL); } 
    "("             {return new Symbol(Sym.ABRE_P); }
    ")"             {return new Symbol(Sym.FECHA_P); }           
    {keywords}      { return new Symbol(Sym.KEYWORDS); }
    {variableName}  { return new Symbol(Sym.VARIABLE_NAME); }
    {functionName}  { return new Symbol(Sym.FUNCTION_NAME); }
    {const_char}    { return new Symbol(Sym.CONST_CHAR); }
    {const_number}  { return new Symbol(Sym.CONST_NUMBER); }
    {whitespace}    {  }
}
<<EOF>> { return new Symbol( Sym.EOF ); }
[^] { throw new Error("caracter inválido: "+yytext()+" na linha "+(yyline+1)+", coluna "+(yycolumn+1) ); }
