import java.util.Scanner;

public class ex11 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int k,j=0;
        for(k=1;k<=10;k++){
		for(j=1;j<=10;j++) {
                    if (k==10) 
                    System.out.printf("%d ",((j+1)*10));
                    else {
                    System.out.printf("%d%d ",j,k);
                }
                }
		System.out.printf("\n");
        }
    }
}


