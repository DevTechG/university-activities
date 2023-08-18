import java.util.Scanner;

public class ex12 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int cont;
	float n,res=0,aux;
	System.out.println("Informe um valor para n: \n");
	n=in.nextFloat();
	for (cont=1;cont<=n;cont++) {
            aux=(cont*2)-1;
	if (cont%2!=0)
            res+=(1/aux);
	else 
            res-=(1/aux);	 
	}
	res=res*4;
	System.out.println("o valor de pi é: "+res);
        
    }
}


