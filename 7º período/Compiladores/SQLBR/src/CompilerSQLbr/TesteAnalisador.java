/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package CompilerSQLbr;


import java.io.*;

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
