using System;

class Mathematics {
    public void PrintIfEven(int value) {
        if (value % 2 == 0) {
            Console.WriteLine(value);
        }
    }
}

class Program {
    static void Main(string[] args) {
        int x = 5;
        if (x % 2 == 0) {
            Console.WriteLine(x);
        }

        x = 10;
        if (x % 2 == 0) {
            Console.WriteLine(x);
        }

        Mathematics m = new Mathematics();
        x = 5;
        m.PrintIfEven(x);

        x = 10;
        m.PrintIfEven(x);
    }
}
