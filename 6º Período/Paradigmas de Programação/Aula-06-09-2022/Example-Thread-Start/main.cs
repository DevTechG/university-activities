using System;
using System.Threading;

class Program
{
    public class ThreadWork
    { 
        public static void DoWork()
        {
            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine("Working thread...");
                Thread.Sleep(100);
            }
        }
    }

    public static void Main()
    {
        Thread thread1 = new Thread(ThreadWork.DoWork);
        thread1.Start();
        for (int i = 0; i < 3; i++)
        {
            Console.WriteLine("In main.");
            Thread.Sleep(100);
        }
    }
}

