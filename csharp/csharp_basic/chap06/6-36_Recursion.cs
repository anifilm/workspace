using System;

class Fibonacci {
    public static long Get(int i) { // 정적 메서드로 선언
        if (i < 0) { return 0; }
        if (i == 1) { return 1; }
        if (i == 2) { return 1; }
        return Get(i - 2) + Get(i - 1);
    }
}

class Recursion {
    static void Main(string[] args) {
        // 재귀 메서드를 사용한 피보나치 정적 메서드
        Console.WriteLine(Fibonacci.Get(1));
        Console.WriteLine(Fibonacci.Get(2));
        Console.WriteLine(Fibonacci.Get(3));
        Console.WriteLine(Fibonacci.Get(4));
        Console.WriteLine(Fibonacci.Get(5));
    }
}
