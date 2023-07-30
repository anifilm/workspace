using System;
using System.IO;
using System.Collections.Generic;

class Program {
    static void Main(string[] args) {
        var dic = new Dictionary<string, Action<TextWriter>>(); // 이 줄에서 var를 활용했어
        dic.Add("Sample1", (writer) => { writer.WriteLine("I'm sample1!"); });
        dic.Add("Sample2", (writer) => { writer.WriteLine("I'm sample2!"); });
        foreach (var item in dic.Values) {
            item(Console.Out);
        }
    }
}
