using System;

class Program {
    static void Main(string[] args) {
        if (args.Length < 2) {
            return;
        }

        Console.WriteLine(args[0]);
        Console.WriteLine(args[1]);
    }
}
