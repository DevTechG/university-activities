public class ex1{
    public static void main(String[] args) {
        int[] num = {0,10,20,30,40,50,10,20,30,40,50};
        int[] d= {5,4,3,2,1,0,5,4,3,2,1};
        for(int i=0;i<num.length; i++) {
           try {
                System.out.println(num[i] + "/" + d[i] + "=" + (num[i]/d[i]));
           } finally {
               System.out.println("Fim da sequência de comandos");
            }                
        }
    }    
}

//Dará erro
/* O código está correto em quesito de compilação, porém o finally é executado
ao fim da sequência de try e catch. Nesse caso  será impresso a cada repetição do 
laço e quando chegar no denominador 0, irá ocorrer um erro que encerrará o programa 
sem nem exibir o finally, portanto ele não gera nenhuma mudança no código e o mesmo
 sempre executará o finally após o try como se fosse uma sequência normal. Para solucionar
 o problema seria necessário implementar o catch que evitaria a interrupção do sistema 
 e teria o finally após a execução.*/