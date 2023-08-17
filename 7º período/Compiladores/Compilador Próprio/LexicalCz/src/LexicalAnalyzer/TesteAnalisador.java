package LexicalAnalyzer;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class TesteAnalisador {
    public static void main(String[] args) throws IOException{
        String arq = "./teste.txt";
        
        BufferedReader in = new BufferedReader(new FileReader(arq));

        Lexer analise = new Lexer(in);

        while (true) {
            Token token = analise.yylex();
            if (token == null) break;
        }
    }
}

