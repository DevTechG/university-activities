public class ex3 {
    public static void main(String[] args) {
        int[] num = {0,10,20,30,40,50,10,20,30,40,50};
        int[] d= {5,4,3,2,1,0,5,4,3,2,1};
        for(int i=0;i<num.length; i++) {
           try {
                System.out.println(num[i] + "/" + d[i] + "=" + (num[i]/d[i]));
           }catch(Exception e){
                System.out.println(e.getMessage());
            } catch(ArithmeticException a){
		System.out.println("Erro ao dividir por 0");
            }
        }
    }
}

/*Dar� erro
A exce��o ArithmeticException procura por erros de execu��o especificamente do 
tipo aritm�tico, por ser uma exce��o especificamente � preciso ver primeiro que
 o Exception geral, ocorrendo um erro que impede a execu��o.*/