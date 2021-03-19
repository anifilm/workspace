using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ThreadingE2
{
    class Program
    {
        static void Main(string[] args)
        {
            var taskCompletionSource = new TaskCompletionSource<bool>();

            var thread = new Thread(() =>
            {
                Console.WriteLine($"Thread number: {Thread.CurrentThread.ManagedThreadId} started");
                Thread.Sleep(5000);
                taskCompletionSource.TrySetResult(true);
                Console.WriteLine($"Thread number: {Thread.CurrentThread.ManagedThreadId} ended");
            });

            //Console.WriteLine($"Thread number: {thread.ManagedThreadId}");
            thread.Start();
            var test = taskCompletionSource.Task.Result;

            Console.WriteLine("task was done: {0}", test);
            Console.ReadKey();
        }
    }
}
