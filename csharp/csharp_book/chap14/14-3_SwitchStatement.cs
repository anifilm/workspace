using System;

Console.WriteLine("가장 좋아하는 프로그래밍 언어는? ");
Console.Write("1. C\t");
Console.Write("2. C++\t");
Console.Write("3. C#\t");
Console.Write("4. Java\n");

int choice = Convert.ToInt32(ReadLine());

switch (choice) {
    case 1:
        Console.WriteLine("C 선택");
        break;
    case 2:
        Console.WriteLine("C++ 선택");
        break;
    case 3:
        Console.WriteLine("C# 선택");
        break;
    case 4:
        Console.WriteLine("Java 선택");
        break;
    default:
        Console.WriteLine("C, C++, C#, Java가 아니군요.");
        break;
}
