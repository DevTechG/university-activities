import java.util.Scanner;

public class ex1 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        float c,f;
        System.out.println("Digite a temperatura em C: ");
        c=in.nextFloat();
        f=(float) (1.8*c+32);
        System.out.println("A temperatura "+c+"ºC é igual a "+f+"ºF");
        
    }
}

