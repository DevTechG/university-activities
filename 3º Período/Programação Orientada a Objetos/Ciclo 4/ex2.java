public class ex2{
    public static void main(String[] args) {
        int[] num = {0,10,20,30,40,50,10,20,30,40,50};
        int[] d= {5,4,3,2,1,0,5,4,3,2,1};
        for(int i=0;i<num.length; i++) {
            try {
                    System.out.println(num[i] + "/" + d[i] + "=" + (num[i]/d[i]));
             }catch(Exception e){
                    System.out.println(e.getMessage());
                }
            }
    }
}

/* O comando Exception captura qualquer tipo de exce��o, que nesse caso ser� a divis�o por zero
Para quest�es de debugging permite encontrar onde est� o erro e ainda continuar testando-o e para
 usu�rios permite que o programa n�o se encerre e seja perdido todas as altera��es feitas, no entanto,
 para usu�rios � preciso uma elabora��o maior do catch, uma vez que ele n�o tem conhecimento para
 identificar o erro em c�digo bruta, para isso � necess�rios por mensagens mais amig�veis*/