import java.util.Scanner;

public class Teste {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        double dinheiro;
        Conta conta=new Conta(-1);
        System.out.println("Informe um valor a ser creditado na conta: ");
        dinheiro=in.nextDouble();
        conta.credito(dinheiro);
        System.out.println("Valor total na conta: "+conta.getSaldo());
    }
}
