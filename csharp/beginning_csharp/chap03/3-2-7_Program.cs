using System;

class Program {
    static void Main(string[] args) {
        int n1 = 5;
        int n2 = n1;

        Console.WriteLine(n1); // 5를 출력
        Console.WriteLine(n2); // 5를 출력

        string txt1 = "C#";
        string txt2 = txt1;

        Console.WriteLine(txt1); // "C#"을 출력
        Console.WriteLine(txt2); // "C#"을 출력
    }
}
