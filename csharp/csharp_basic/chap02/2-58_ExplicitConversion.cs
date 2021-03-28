using System;

class ExplicitConversion {
    static void Main(string[] args) {
        // 강제 자료형 변환
        long longNumber = 2147483647L + 2147483647L;
        int intNumber = (int)longNumber; // long 자료형을 int 자료형으로 변환
        Console.WriteLine(intNumber); // -2
    }
}
