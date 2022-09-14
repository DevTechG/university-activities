package ordenar;

import java.util.List;
import java.util.Random;
import java.util.ArrayList;

public class Ordenar{
    private List lsVet;

    public Ordenar() {
        lsVet = new ArrayList();
        preencher();
    }
    public void preencher() {
        for(int i = 0; i < 10000; ++i) {
            double vet[] = new double[2000];
            atribuirValores(vet);
            ordenar(vet);
            lsVet.add(vet);
        }
    }

    public void atribuirValores(double vet[]) {
        Random rand = new Random();
        for(int i = 0; i < vet.length; ++i) {
            vet[i] = rand.nextDouble();
        }
    }

    public void mostrar() {
        double vet[];
        for(int i = 0; i < lsVet.size(); ++i) {
            vet = (double[])lsVet.get(i);
            System.out.println("Pos " + i + " = " + vet[0]);
        }
    }

    public void ordenar(double vet[]) {
        int posMaior;
        double maior;
        double aux;
        for(int i = 0; i < vet.length; ++i) {
            posMaior = 0;
            maior = vet[0];
            for(int j = 1; j < vet.length - i - 1; ++j) {
                if(vet[j] > maior) {
                    posMaior = j;
                    maior = vet[j];
                }
            }
            aux = vet[vet.length - i - 1];
            vet[vet.length - i - 1] = maior;
            vet[posMaior] = aux;
        }
    }

    public static void main(String args[]) {
        Ordenar ordenar = new Ordenar();
        ordenar.mostrar();
        System.out.println("Classe ordenar");
    }
}
