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

/* O comando Exception captura qualquer tipo de exceção, que nesse caso será a divisão por zero
Para questões de debugging permite encontrar onde está o erro e ainda continuar testando-o e para
 usuários permite que o programa não se encerre e seja perdido todas as alterações feitas, no entanto,
 para usuários é preciso uma elaboração maior do catch, uma vez que ele não tem conhecimento para
 identificar o erro em código bruta, para isso é necessários por mensagens mais amigáveis*/