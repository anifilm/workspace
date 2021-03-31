using System;

class Fibonacci {
    public long Get(int i) {
        if (i < 0) { return 0; } // 종료 조건
        if (i == 1) { return 1; }
        return Get(i - 2) + Get(i - 1);
    }
}

class Recursion {
    static void Main(string[] args) {
        // 재귀 메서드를 사용한 피보나치 인스턴스 메서드
        Fibonacci fibo = new Fibonacci();
        Console.WriteLine(fibo.Get(1));
        Console.WriteLine(fibo.Get(2));
        Console.WriteLine(fibo.Get(3));
        Console.WriteLine(fibo.Get(4));
        Console.WriteLine(fibo.Get(5));
    }
}
