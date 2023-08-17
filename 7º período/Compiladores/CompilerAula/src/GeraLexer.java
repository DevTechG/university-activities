import jflex.exceptions.SilentExit;

public class GeraLexer {
    public static void main(String[] args) throws SilentExit {
        String[] file = { "./src/lexico.flex" };
        jflex.Main.generate(file);
    
    }    
}
