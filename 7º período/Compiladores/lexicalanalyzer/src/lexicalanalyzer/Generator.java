package lexicalanalyzer;

import java.io.File;
import java.nio.file.Paths;

public class Generator {
    public static void main(String[] args) {

        String rootPath = Paths.get("").toAbsolutePath().toString();
        String subPath = "/src/lexicalanalyzer/";

        System.out.println("Caminho: " + rootPath + subPath);
        String file = rootPath + subPath + "language.lex";

        System.out.println("file: " + file);
        File sourceCode = new File(file);
        // C:\Users\LabMaker\Desktop\Deletar\Faculdade\7º Período\Compiladores\lexicalanalyzer\src\lexicalanalyzer\language.lex
        jflex.Main.generate(sourceCode);

    }
}
