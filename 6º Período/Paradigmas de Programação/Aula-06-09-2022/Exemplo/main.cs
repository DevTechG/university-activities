using System;
using System.Threading;

class Program {

    static void run(){
        for (int i = 0; i<10;i++) {
            Console.WriteLine("t" + Thread.CurrentThread.Name + " pos: "+i);
        }
    }
  public static void Main (string[] args) {
    Console.WriteLine ("Thread Principal");
      Thread.CurrentThread.Name = "1";
      for (int i = 0; i<10; i++) {
          Thread t = new Thread(run);
          t.Name= " "+i;
          t.Start();
      }
      for (int i = 0; i < 10; ++i) {
            Console.WriteLine ("1");
        }
    //Thread t = new Thread(new testeThread);
    //t.Start();
  }

    static void testeThread() {
        Console.WriteLine("Thread secundária");
        for (int i = 0; i < 10000; ++i) {
            Console.WriteLine ("2");
        }
    }
}