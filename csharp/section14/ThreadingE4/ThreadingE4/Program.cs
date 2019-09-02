using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ThreadingE4
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Main Thread started");
            Thread thread1 = new Thread(Thread1Function);
            Thread thread2 = new Thread(Thread2Function);

            thread1.Start();
            thread2.Start();

            //thread1.Join();
            //Console.WriteLine("Thread1Function done");

            if (thread1.Join(1000))
            {
                Console.WriteLine("Thread1Function done");
            }
            else
            {
                Console.WriteLine("Thread1Function wasn't done within 1 sec");
            }

            thread2.Join();
            Console.WriteLine("Thread2Function done");

            for (int i = 0; i < 10; i++)
            {
                if (thread1.IsAlive)
                {
                    Console.WriteLine("Thread1 is still doing stuff");
                    Thread.Sleep(300);
                }
                else
                {
                    Console.WriteLine("Thread1 completed");
                }
            }
            Console.WriteLine("Main Thread ended");

            /*
            Try Ctrl + F5 in Visual Studio to run your program, this will add a pause with "Press any key to continue..."
            automatically without any Console.Readline() or ReadKey() functions.
            */

            //Console.ReadKey();
        }

        public static void Thread1Function()
        {
            Console.WriteLine("Thread1Funciton started");
            Thread.Sleep(3000);

            Console.WriteLine("Thread1Funciton coming back to caller");
        }

        public static void Thread2Function()
        {
            Console.WriteLine("Thread2Funciton started");
        }
    }
}
