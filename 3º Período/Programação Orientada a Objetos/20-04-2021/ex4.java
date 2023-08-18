import java.util.Scanner;

public class ex4 {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        float ohm=0,amp=0,watt=0;
        System.out.println("Digite o Watts(ou 0 se não houver valor): ");
        watt=in.nextFloat();
        System.out.println("Digite o Ohms(ou 0 se não houver valor): ");
        ohm=in.nextFloat();
        System.out.println("Digite o Ohms(ou 0 se não houver valor): ");
        amp=in.nextFloat();
        if (watt==0) {
            watt=(float)(Math.pow(amp,2)*ohm);
            System.out.printf("Watts: "+watt);
        }
        else if (ohm==0){
            ohm=(float)(watt/Math.pow(amp,2));
            System.out.printf("Ohms: "+ohm);
        }
        else { 
            amp=(float)Math.sqrt(watt/ohm);
            System.out.printf("Amperes: "+amp);
    
        }
    }
}


