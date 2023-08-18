import java.util.Scanner;

public class ex5 {
    public static void main(String args[]) {
        Scanner in=new Scanner(System.in); 
        float raio,vol,area;
        System.out.printf("Estatísticas da Esfera\n============================== \nDigite o raio r: ");
        raio=in.nextFloat();
        if (raio<=0) 
            System.out.println("o raio r digitado é inválido");
        else {
            area=(float)(4*Math.PI*Math.pow(raio,2));
            vol=(float)((4*Math.PI*Math.pow(raio,3))/3);
            System.out.printf("Área: %f \nVolume: %f",area,vol);
        }
    }
}
