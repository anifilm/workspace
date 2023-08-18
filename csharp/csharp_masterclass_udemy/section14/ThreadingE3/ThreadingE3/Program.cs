using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ThreadingE3
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
            Enumerable.Range(0, 1000).ToList().ForEach(f =>
            {
                new Thread(() =>
                {
                    Console.WriteLine($"Thread number: {Thread.CurrentThread.ManagedThreadId} started");
                    Thread.Sleep(1000);

                    Console.WriteLine($"Thread number: {Thread.CurrentThread.ManagedThreadId} ended");
                }).Start();
            });
            */

            new Thread(() =>
            {
                Thread.Sleep(1000);
                Console.WriteLine("Thread Background");
            })
            { IsBackground = true }.Start();

            Enumerable.Range(0, 1000).ToList().ForEach(f =>
            {
                ThreadPool.QueueUserWorkItem((o) =>
                {
                    Console.WriteLine($"Thread number: {Thread.CurrentThread.ManagedThreadId} started");
                    Thread.Sleep(1000);

                    Console.WriteLine($"Thread number: {Thread.CurrentThread.ManagedThreadId} ended");
                });
            });

            Console.ReadKey();
        }
    }
}
