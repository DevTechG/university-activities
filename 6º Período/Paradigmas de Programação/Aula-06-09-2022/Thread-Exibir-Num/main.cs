using System;
using System.Threading;

public class Program {
    public static void ThreadNum() {
        for (int i = 0; i < 1000; i++) {
            Console.WriteLine("{0}", i);
        }
    }

    public static void Main() {
        Console.WriteLine("Main thread: Start a second thread.");
        Thread t = new Thread(new ThreadStart(ThreadNum));
        t.Start();
        Console.ReadLine();
    }
}