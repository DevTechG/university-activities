import java.util.Scanner;

public class ex8 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int a,b,c;
        System.out.println("Entre com as medidas dos lados do triangulo: ");
        a=in.nextInt();
        b=in.nextInt();
        c=in.nextInt();
       if ((a+b>c) && (a+c>b) && (c+b>a)) {
		if ((a==b) &&(a==c)) 
			System.out.println("O triangulo formado por esses lados e equilatero");
		else if ((a==b) || (a==c) || (b==c))
			System.out.println("O triangulo formado por esses lados e isosceles");
		else 
			System.out.println("O triangulo formado por esses lados e escaleno");
	} else 
		System.out.println("Error\nOs valores informados nao formam um triangulo!");
    }
}

