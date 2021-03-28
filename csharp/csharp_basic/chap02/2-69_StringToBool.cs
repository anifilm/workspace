using System;

class StringToBool {
    static void Main(string[] args) {
        // 문자열을 불리언으로 변환
        Console.WriteLine(bool.Parse("True"));
        Console.WriteLine(bool.Parse("true"));
        Console.WriteLine(bool.Parse("False"));
        Console.WriteLine(bool.Parse("false"));
    }
}
