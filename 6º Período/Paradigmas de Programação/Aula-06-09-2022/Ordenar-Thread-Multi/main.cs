using System;
using System.Threading;
using System.Collections.Generic;
using System.Collections;
using System.Diagnostics;

public class ThreadOrdenar {
    List<int[]> lsVet = new List<int[]>();

    public ThreadOrdenar() {
        var lsVet = new List<Thread>();
        //ArrayList lsVet = new ArrayList();
        preencher();
    }

    public void preencher() {
        Thread[] tVet = new Thread[100];
        for (int i = 0; i < tVet.Length; ++i) {
            var t = new Thread(ThreadPreencher => {
                for (int j = 0; j < 100; ++j) {
                    int[] vet = new int[2000];
                    atribuirValores(vet);
                    ordenar(vet);
                    lsVet.Add(vet);
                }
            });
            t.Start();
            tVet[i] = t;
       }

        for (int i = 0; i < tVet.Length; ++i) {
            try {
                tVet[i].Join();            
            } catch (ThreadInterruptedException ex) {
                Console.WriteLine(ex);
            }
        }
    }
    
    public void atribuirValores(int[] vet) {
        Random rand = new Random();
        for (int i = 0; i < vet.Length; ++i) {
            vet[i] = rand.Next(1, 10000000);
        }
    }

    public void mostrar() {
        int[] vet;
        for (int i = 0; i < lsVet.Count; ++i) {
            vet = (int[])lsVet[i];
            Console.WriteLine("***Lista {0}***", i);
            Console.WriteLine("Pos {0} = " + vet[vet.Length - 1], i);
        }
    }

    public void ordenar(int[] vet) {
        int posMaior;
        int maior;
        int aux;
        for (int i = 0; i < vet.Length; ++i) {
            posMaior = 0;
            maior = vet[0];
            for (int j = 1; j < vet.Length - i - 1; ++j) {
                if (vet[j] > maior) {
                    posMaior = j;
                    maior = vet[j];
                }
            }
            aux = vet[vet.Length - i - 1];
            vet[vet.Length - i - 1] = maior;
            vet[posMaior] = aux;
        }
    }
}

class Program {
    public static void Main(string[] args) {
        Stopwatch stopWatch = new Stopwatch();
        stopWatch.Start();
        ThreadOrdenar ordenar = new ThreadOrdenar();
        ordenar.mostrar();
        Console.WriteLine("Classe ordenarThread");
        stopWatch.Stop();
        TimeSpan ts = stopWatch.Elapsed;
        Console.WriteLine("Tempo: {0:00}:{1:00}:{2:00}.{3:00}", ts.Hours, ts.Minutes, ts.Seconds, ts.Milliseconds / 10);
    }   
}