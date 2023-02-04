using System;

class Program {
    static void Main(string[] args) {
        // Equals() 값 비교
        int n = 5;
        Console.WriteLine(n.Equals(5)); // 출력 결과: True

        int n1 = 5;
        int n2 = 5;
        Console.WriteLine(n1.Equals(n2)); // 출력 결과: True

        n2 = 6;
        Console.WriteLine(n1.Equals(n2)); // 출력 결과: False
    }
}
