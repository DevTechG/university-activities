package Calculadora;
import java_cup.runtime.*;
%%
%class LexerCalc
%cup
%line
%column
%{
 private Symbol symbol(int type) { return new Symbol(type, yyline, yycolumn); }
 private Symbol symbol(int type, Object value) {
return new Symbol(type, yyline, yycolumn, value);
}
%}
EspacoEmBranco = [\t\n\r ]+
numero = [0-9]+
%%
<YYINITIAL> {
 {numero} { return symbol(Sym.NUMERO, new Integer(Integer.parseInt(yytext()))); }
 “+” { return symbol(Sym.MAIS); }
 “-” { return symbol(Sym.MENOS); }
 “*” { return symbol(Sym.VEZES); }
 “/” { return symbol(Sym.DIVIDE); }
 “(“ { return symbol(Sym.ABRE_PAREN); }
 “)” { return symbol(Sym.FECHA_PAREN); }
 “;” { return symbol(Sym.PTVG); }
 {EspacoEmBranco} {}
}
<<EOF>> { return symbol(Sym.EOF); }
//mensagem de erro caso ocorre erro léxico
[^] { throw new Error(“caracter INVÁLIDO <” + yytext() + “>”);} 