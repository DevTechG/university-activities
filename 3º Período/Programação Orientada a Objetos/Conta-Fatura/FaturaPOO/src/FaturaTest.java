import java.util.Scanner;


public class FaturaTest {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        Fatura fat= new Fatura("123123","Itens",-1,2.5);
        
        System.out.println("Número: "+fat.getNumero());
        System.out.println("Descrição: "+fat.getDescricao());
        System.out.println("Quantidade: "+fat.getQtde());
        System.out.println("Preço unitário: "+fat.getPreco());
        System.out.println("Valor total: "+fat.calculaFatura());
    }
    
}