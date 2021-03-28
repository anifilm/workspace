using System;

class IncrementOperatorPosition {
    static void Main() {
        // 증감 연산자의 전위 형태
        int number = 10;
        Console.WriteLine(number);   // 10
        Console.WriteLine(++number); // 11
        Console.WriteLine(--number); // 10
        Console.WriteLine(number);   // 10
    }
}
