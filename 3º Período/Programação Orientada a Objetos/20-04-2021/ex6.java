import java.util.Scanner;

public class ex6 {
        public static void main(String args[]) {
        Scanner in= new Scanner(System.in);
        int n,a,d,s;
        System.out.printf("Conversor de Dias\n============================== \nDigite o n�mero de dias: ");
        n=in.nextInt();
        a=n/365;
        s=(n%365)/7; //vari�vel inteira s� recebe parte inteira, ent�o trunca o resto da divis�o por 365
        d=(n%365)%7; // devolvera o resto da divis�o por 365 e dividir� pela quantidade de dias na semana, ex: resto 379/365=14>14/7=2
        System.out.printf("\n%d dias equivale a %d anos, %d semanas e %d dias",n,a,s,d);
    }
} 
