import java.util.Scanner;

public class ex10 {
    public static void main(String args[]) {
    Scanner in = new Scanner(System.in);
    float h,m,r;
    int n_atom, y=0; 
    String nome,simb;
    System.out.println("Informe o nome do elemento: ");
    nome = in.next();
    System.out.println("Informe o simbolo do elemento: ");
    simb = in.next();
    System.out.println("Informe o número Atômico: ");
    n_atom= in.nextInt();
    System.out.println("Informe a meia-vida: ");
    h = in.nextFloat();
    System.out.println("Informe a massa: ");
    m = in.nextFloat(); 
    r=m;  
    System.out.println(nome+" - "+n_atom+" - " +simb);
    System.out.println("Anos decorrentes     Quantidade");    
    while((m/2)<r){
        r = (float) (m * (Math.pow(0.5,(y/h))));	
        System.out.printf("%d              %.2f g\n", y, r);
        y++;
   }
}
}