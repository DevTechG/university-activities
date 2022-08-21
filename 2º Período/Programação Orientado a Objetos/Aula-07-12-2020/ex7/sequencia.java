public class sequencia {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int x=100;
        System.out.print(x);
        while (x>1) {
            if (x%2==0) {
                x=x/2;
                System.out.print("-> "+x);
            } else {
              x=3*x+1;
              System.out.print("-> "+x);
            } 
        }
    }
    
}