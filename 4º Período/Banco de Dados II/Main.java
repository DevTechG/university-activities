import java.util.Scanner;


public class Main{
	public static void main(String[] args) {
	  Scanner in = new Scanner(System.in);
    
    float menor=999,maior=0,media = 0;
    int h = 0,m = 0; 
	  float altura[] = new float[10];
	  char sexo[] = new char[10];
	    
	  for (int i = 0; i <= 9; i++) {
      System.out.println("Digite o sexo da pessoa da "+(i+1)+"ª pessoa(M/F):");
      sexo[i] = in.next().charAt(0);
      System.out.println("Digite a altura da pessoa da "+(i+1)+"ª pessoa:");
      altura[i] = in.nextFloat();
      if (sexo[i] == 'H' || sexo[i] == 'h'){
        media += altura[i];
        h++;
      }
      if (sexo[i] == 'M' || sexo[i] == 'm')
        m++;
      if (menor > altura[i])
        menor=altura[i];
      if (maior < altura[i])
        maior = altura[i];
    }
    System.out.println("A menor altura: "+menor);
    System.out.println("A maior altura: "+maior);
    System.out.println("A altura média entre os homens: "+media/h);
    System.out.println("Total de Mulheres: "+m);

  }
}