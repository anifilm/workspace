using System;

class Program {
    static void Main(string[] args) {
        char ch = 'A';
        Console.WriteLine(ch); // A 문자 출력

        char ch1 = '\t';
        char ch2 = 'T';
        char ch3 = '\n';
        char ch4 = 'o';
        Console.Write(ch1); // TAB 문자를 표현
        Console.Write(ch2);
        Console.Write(ch3); // 개행(NEW LINE) 문자를 표현
        Console.Write(ch4);

        ch = '\u2023';
        Console.Write(ch);
        Console.WriteLine();

        char ch = '\\';
        Console.Write(ch);

        string text = "Hello World";
        Console.WriteLine(text); // 출력 결과: Hello World

        text = "\tHello\nWorld";
        Console.WriteLine(text);

        text = @"\tHello\nWorld";
        Console.WriteLine(text);

        text = "Hello";
        Console.WriteLine(text + " " + "World");
    }
}
