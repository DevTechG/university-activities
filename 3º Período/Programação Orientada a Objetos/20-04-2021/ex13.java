import java.util.Scanner;

public class ex13 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
       	int anos,cont,anos_1=0,anos_2=0;
	float pop_i,proj_1,proj_2;
	System.out.println("Informe o tamanho inicial da popula��o: \n");
	pop_i=in.nextFloat();
	System.out.println("Para quantos anos dever� ser realizado as proje��es: ");
	anos=in.nextInt();
	proj_1=pop_i;
	proj_2=pop_i;
	for (cont=1;cont<=anos;cont++) {
		proj_1*=1.1;
		proj_2+=50000;
	}
	System.out.printf("De acordo com a primeira proje��o, em %d anos a populu��o ser� de %.0f \nBaseado na segunda proje��o, ao fim desse mesmo per�odo de tempo a popula��o ser� de %.0f\n",anos,proj_1,proj_2);
	cont=0;
	proj_1=pop_i;
	proj_2=pop_i;	
	do {
		if (proj_1<=2*pop_i) {
		proj_1*=1.1;
		anos_1++;
	}
		if (proj_2<=2*pop_i) {
		proj_2+=50000;
		anos_2+=1;
	}
		if ((proj_2>=2*pop_i) && (proj_1>=2*pop_i)) cont=1;
	} while (cont!=1);
	System.out.printf("Ser� necess�rio %d anos para que a popula��o dobre de acordo com a primeira proje��o\nSer� necess�rio %d anos para que a popula��o dobre de acordo com a segunda proje��o",anos_1,anos_2);
        
    }
}


