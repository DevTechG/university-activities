import java.io.IOException;

import jflex.exceptions.SilentExit;

public class Gerador {
    public static void main(String[] args) throws IOException, SilentExit {
        String[] arq = {"src/minijava.flex"};
        gerarLexer(arq);
    }

    public static void gerarLexer(String[] arq) throws SilentExit {
        jflex.Main.generate(arq);
    }

}
