import java.util.Scanner;

public class ex2 {
    public static void main(String args[]) {
        Scanner in= new Scanner(System.in);
        int i,a,d,s;
        System.out.println("Informe a idade em dias:");
        i=in.nextInt();
        a=i/365;
        s=(i%365)/7; //vari�vel inteira s� recebe parte inteira, ent�o trunca o resto da divis�o por 365
        d=(i%365)%7; // devolvera o resto da divis�o por 365 e dividir� pela quantidade de dias na semana, ex: resto 379/365=14>14/7=2
        System.out.printf("%d dias equivale a %d anos, %d semanas e %d dias",i,a,s,d);
    }
}
