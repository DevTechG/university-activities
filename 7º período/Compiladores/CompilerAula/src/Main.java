import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        String file = "./src/test.txt";

        BufferedReader in = new BufferedReader(new FileReader(file));

        Lexer analysis = new Lexer(in);
        analysis.yylex();
    }
}
