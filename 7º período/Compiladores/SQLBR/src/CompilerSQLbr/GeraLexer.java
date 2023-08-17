package CompilerSQLbr;

import java.io.*;
import jflex.exceptions.SilentExit;

/**
 *
 * @author aluno
 */

public class GeraLexer {
    public static void main(String[] args) throws IOException, SilentExit {
        // String arq = "./src/Compilador/especificacao.flex";
        //gerarLexer(arq);
        String arq[] = {"./src/CompilerSQLbr/language.flex"};  
        gerarLexer(arq);
    }

    private static void gerarLexer(String[] arq) throws SilentExit {
        jflex.Main.generate(arq);
    }
}
