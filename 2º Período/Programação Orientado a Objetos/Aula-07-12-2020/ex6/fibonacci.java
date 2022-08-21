public class fibonacci {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int fib=0,ant=0;
       while (fib<100) {
            if (fib==0) {
                System.out.println(fib);
                fib++;
                System.out.println(fib);
            } else {
                fib+=ant;
                ant=fib-ant;
                    if (fib<100) {
                System.out.println(fib);
            } else{
                   break;
                }

        }
    }
}
}