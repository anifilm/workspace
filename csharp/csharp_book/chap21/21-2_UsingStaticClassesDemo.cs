using System;
using static System.Math;  // using static 지시문: C# 6.0의 새로운 기능

class UsingStaticClassesDemo {
    static void Main() {
        // [1] 기본 사용 방식
        Console.WriteLine(Math.Pow(2, 10));

        // [2] using static 지시문에 의한 줄임 표현
        Console.WriteLine(Pow(2, 10));
        Console.WriteLine(Max(3, 5));
    }
}
