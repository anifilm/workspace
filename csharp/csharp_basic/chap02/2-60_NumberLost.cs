using System;

class NumberLost {
    static void Main(string[] args) {
        // 숫자 손상
        long longNumber = 2147483647L + 2147483647L;
        int longToInt = (int)longNumber; // long 자료형을 int 자료형으로 변환
        Console.WriteLine(longToInt); // -2
        Console.WriteLine();

        double doubleNumber = 52.27310332;
        int doubleToInt = (int)doubleNumber; // 52
        Console.WriteLine(doubleToInt);
    }
}
