using System;

class Mathematics {
    public int f(int x) {
        return x * x;
    }
}

class Program {
    static void Main(string[] args) {
        Mathematics m = new Mathematics();
        int result = m.f(5);
        Console.WriteLine(result); // 출력 결과: 25
    }
}
