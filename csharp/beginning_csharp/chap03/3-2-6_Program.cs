using System;

class Program {
    static void Main(string[] args) {
        ushort u = 65;
      //char c = u; // 형변환 오류

        char c = (char)u;
        Console.WriteLine(c); // 출력 결과: A

        int n = 40000;
        short s = (short)n;
        Console.WriteLine(s); // 출력 결과: -25536
    }
}
