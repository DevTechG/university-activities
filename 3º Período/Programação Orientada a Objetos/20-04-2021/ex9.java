import java.util.Scanner;

public class ex9 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        float n,menor=0,maior=0,med,sum=0,d,v,total=0; 
	int i=0;
        System.out.println("Digite um número (ou 0 para sair): ");
        n=in.nextFloat();
        menor=n;
        maior=n;
        while (n!=0) {
            if(n<menor){
		menor=n;			
            }
            if (n>maior){
		maior=n;
            }
            sum+=n;
            total+=Math.pow(n,2);
            i++; 
            n = in.nextFloat();
	}
	med = sum/i;
	v = (float) (total-(Math.pow(med,2)*i));
	v /= i;
	d=(float) Math.sqrt(v);
        System.out.printf("Minimo: %.1f\nMáximo%.2f\n: Média: %.1f\nVariância: %.4f\nDesvio Padrao: %.4f",menor,maior,med,v,d);
    }
}
