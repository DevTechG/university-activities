package Analyzer;
import java.io.*;
import jflex.exceptions.SilentExit;

public class Gera_Lexer {
     public static void main(String[] args) throws IOException, SilentExit {  
        String[] arq = {"./src/Analyzer/lexico.flex"};
        gerarLexer(arq);           
     }
     public static void gerarLexer( String[] arq ) throws SilentExit{
        jflex.Main.generate(arq);        
     }
      
}
