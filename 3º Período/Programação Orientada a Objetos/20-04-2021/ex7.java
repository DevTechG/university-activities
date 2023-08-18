import java.util.Scanner;

public class ex7 {
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        float val,prod1,prod2;
        System.out.println("Digite o preço dos dois produtos: ");
        prod1=in.nextFloat();
        prod2=in.nextFloat();
        if (prod1<prod2)
            prod1*=0.5;
        else
            prod2*=0.5;
        val=prod1+prod2;
        System.out.println("O valor total da compra é "+val);
    }
}
