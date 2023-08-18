import java.util.Scanner;

public class ex2 {
    public static void main(String args[]) {
        Scanner in= new Scanner(System.in);
        int i,a,d,s;
        System.out.println("Informe a idade em dias:");
        i=in.nextInt();
        a=i/365;
        s=(i%365)/7; //variável inteira só recebe parte inteira, então trunca o resto da divisão por 365
        d=(i%365)%7; // devolvera o resto da divisão por 365 e dividirá pela quantidade de dias na semana, ex: resto 379/365=14>14/7=2
        System.out.printf("%d dias equivale a %d anos, %d semanas e %d dias",i,a,s,d);
    }
}
