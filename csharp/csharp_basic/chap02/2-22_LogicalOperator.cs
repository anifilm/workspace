using System;

class LogicalOperator {
    static void Main(string[] args) {
        // 불리언과 논리 연산자
        Console.WriteLine(DateTime.Now.Hour < 3 || 8 < DateTime.Now.Hour);
        Console.WriteLine(3 < DateTime.Now.Hour && DateTime.Now.Hour < 8);
    }
}
