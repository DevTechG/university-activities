import java.util.Scanner;

public class ex3 {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        float nota1,nota2,nota3,nota4,media;
        System.out.println("Digite as quatro notas do aluno: ");
        nota1=in.nextFloat();
        nota2=in.nextFloat();
        nota3=in.nextFloat();
        nota4=in.nextFloat();
        media=(nota1+nota2+nota3+nota4)/4;
        if (media<=4.9)
            System.out.printf("O aluno foi reprovado com "+media);
        else if (media<=6.9)
            System.out.printf("O aluno foi ??me com "+media);
        else 
            System.out.printf("O aluno foi aprovado com "+media);
    }
}

