using System;
using System.Linq;

// csc 컴파일 안됨 dotnet run 실행 가능
int[] someArray = Enumerable.Range(1, 5).ToArray();
int[] subArray1 = someArray[0..2]; // {1, 2}
Console.WriteLine(string.Join(", ", subArray1));
