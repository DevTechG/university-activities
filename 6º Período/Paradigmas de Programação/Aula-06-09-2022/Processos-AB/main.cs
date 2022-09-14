using System;
using System.Threading;

class Program {
  public static void ProcessoA() {
        var items = new String[10] {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
        for (int i = 0; i < items.Length; i++) {
            Console.WriteLine("Processo A =>" + items[i]);
            Thread.Sleep(80);
        }
    }

    public static void ProcessoB() {
        var items = new String[10] {"1", "2", "4", "5", "5", "6", "7", "8", "9", "10"};
        for (int i = 0; i < items.Length; i++) {
            Console.WriteLine("Processo B =>" + items[i]);
            Thread.Sleep(100);
        }
    }
    public static void Main (string[] args) {
    //ProcessoA();
    //ProcessoB();
    var thread1 = new Thread(ProcessoA);
    var thread2 = new Thread(ProcessoB);
    
    thread2.Start();
    thread1.Start();
  }
}