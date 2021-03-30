using System;

// 메서드 오버로딩
class MyMath {
    public static int Abs(int input) {
        if (input < 0) {
            return -input;
        }
        else {
            return input;
        }
    }

    public static double Abs(double input) {
        if (input < 0) {
            return -input;
        }
        else {
            return input;
        }
    }

    public static double Abs(long input) {
        if (input < 0) {
            return -input;
        }
        else {
            return input;
        }
    }
}

class Overloads {
    static void Main(string[] args) {
        // int
        Console.WriteLine(MyMath.Abs(52));
        Console.WriteLine(MyMath.Abs(-273));

        // double
        Console.WriteLine(MyMath.Abs(52.273));
        Console.WriteLine(MyMath.Abs(-32.103));

        // long
        Console.WriteLine(MyMath.Abs(21474836470));
        Console.WriteLine(MyMath.Abs(-21474836470));
    }
}
