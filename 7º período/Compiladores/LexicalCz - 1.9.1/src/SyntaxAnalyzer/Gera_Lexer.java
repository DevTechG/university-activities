package SyntaxAnalyzer;
import java.io.*;
import java.nio.file.Paths;
import java_cup.*;
import java_cup.runtime.*;
import jflex.exceptions.SilentExit;

public class Gera_Lexer {
     public static void main(String[] args) throws IOException, SilentExit {  
        String arq = Paths.get("").toAbsolutePath().toString() + "/src/SyntaxAnalyzer/";
        String arq1[] = {arq  + "lexico.flex"};  // nome do arq. do lexico
        System.out.println(arq1);
        gerarLexer(arq1);               
     }
     public static void gerarLexer( String[] arq) throws SilentExit{
        jflex.Main.generate(arq);         
     }
      
}
