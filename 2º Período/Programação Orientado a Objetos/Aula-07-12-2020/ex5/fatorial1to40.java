public class fatorial1to40 {

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
//  float fatorial=1; //int suporta números de -2147483648 até 2147483647, sendo um total de 4 bytes
//  double fatorial=1; // double suporta números -1.7*10^308 até 1.7*10^308
    long fatorial=1; // long suporta números de -9,223,372,036,854,775,808 até 9,223,372,036,854,775,807, sendo um de 8 bytes
    for (int n=1;n<=40;n++)	{
            fatorial*=n;
            System.out.println(fatorial);
	}

    }
    
}