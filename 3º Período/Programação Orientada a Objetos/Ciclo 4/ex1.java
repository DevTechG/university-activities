public class ex1{
    public static void main(String[] args) {
        int[] num = {0,10,20,30,40,50,10,20,30,40,50};
        int[] d= {5,4,3,2,1,0,5,4,3,2,1};
        for(int i=0;i<num.length; i++) {
           try {
                System.out.println(num[i] + "/" + d[i] + "=" + (num[i]/d[i]));
           } finally {
               System.out.println("Fim da sequ�ncia de comandos");
            }                
        }
    }    
}

//Dar� erro
/* O c�digo est� correto em quesito de compila��o, por�m o finally � executado
ao fim da sequ�ncia de try e catch. Nesse caso  ser� impresso a cada repeti��o do 
la�o e quando chegar no denominador 0, ir� ocorrer um erro que encerrar� o programa 
sem nem exibir o finally, portanto ele n�o gera nenhuma mudan�a no c�digo e o mesmo
 sempre executar� o finally ap�s o try como se fosse uma sequ�ncia normal. Para solucionar
 o problema seria necess�rio implementar o catch que evitaria a interrup��o do sistema 
 e teria o finally ap�s a execu��o.*/