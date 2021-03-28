using System;

class Operators {
    static void Main(string[] args) {
        // 2-43: 후위 증감 연산자
        int number1 = 10;
        Console.WriteLine(number1);
        Console.WriteLine(number1); number1 += 1; // Console.WriteLine(number++);
        Console.WriteLine(number1); number1 -= 1; // Console.WriteLine(number--);
        Console.WriteLine(number1);
        Console.WriteLine();

        // 2-44: 증감 연산자 이해도 확인
        int number2 = 10;
        Console.WriteLine(number2++); // 10
        Console.WriteLine(++number2); // 12
        Console.WriteLine(number2--); // 12
        Console.WriteLine(--number2); // 10
        Console.WriteLine();

        // 2-45: 여러 줄로 나누어 적은 증감 연산자
        int number3 = 10;
        Console.WriteLine(number3);
        number3++;
        number3++;
        Console.WriteLine(number3);
        Console.WriteLine(number3);
        number3--;
        number3--;
    }
}
