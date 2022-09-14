using System;
using System.Collections.Generic;
using System.Collections;
using System.Diagnostics;
using System.Threading;

public class Ordenar
{
    List<int[]> lsVet = new List<int[]>();

    public Ordenar()
    {
        var lsVet = new List<Thread>();

        //ArrayList lsVet = new ArrayList();
        preencher();
    }

    public void preencher()
    {
        for (int i = 0; i < 10000; ++i)
        {
            int[] vet = new int[2000];
            atribuirValores(vet);
            ordenar(vet);
            lsVet.Add(vet);
        }
    }

    public void atribuirValores(int[] vet)
    {
        Random rand = new Random();
        for (int i = 0; i < vet.Length; ++i)
        {
            vet[i] = rand.Next(1, 10000000);
        }
    }

    public void mostrar()
    {
        int[] vet = new int[2000];
        for (int i = 0; i < lsVet.Count; ++i)
        {
            vet = (int[])lsVet[i];
            Console.WriteLine("***Lista {0}***", i);
            Console.WriteLine("Pos {0} = " + vet[vet.Length - 1], i);
        }
    }

    public void ordenar(int[] vet)
    {
        int posMaior;
        int maior;
        int aux;
        for (int i = 0; i < vet.Length; ++i)
        {
            posMaior = 0;
            maior = vet[0];
            for (int j = 1; j < vet.Length - i - 1; ++j)
            {
                if (vet[j] > maior)
                {
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

class Program
{
    public static void Main(string[] args)
    {
        Stopwatch stopWatch = new Stopwatch();
        stopWatch.Start();
        Ordenar ordenar = new Ordenar();
        ordenar.mostrar();
        Console.WriteLine("Classe ordenar");
        stopWatch.Stop();
        TimeSpan ts = stopWatch.Elapsed;
        Console.WriteLine("Tempo: {0:00}:{1:00}:{2:00}.{3:00}", ts.Hours, ts.Minutes, ts.Seconds, ts.Milliseconds / 10);
    }
}