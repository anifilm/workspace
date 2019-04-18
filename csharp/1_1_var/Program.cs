using System;
using System.IO;
using System.Collections.Generic;

namespace _1_1_var
{
    class Program
    {
        static void Main(string[] args)
        {
            //Dictionary<string, Action<TextWriter>> dic = new Dictionary<string, Action<TextWriter>>();
            var dic = new Dictionary<string, Action<TextWriter>>();

            dic.Add("Sample1", (writer) => { writer.WriteLine("I'm sample1!");});
            dic.Add("Sample2", (writer) => { writer.WriteLine("I'm sample2!");});
            foreach(var item in dic.Values) item(Console.Out);
        }
    }
}
