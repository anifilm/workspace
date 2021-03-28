using System;

// 2-24: 오버플로우
int a1 = 2147483640;
int b1 = 52273;
Console.WriteLine(a1 + b1);
Console.WriteLine();

// 2-27: uint와 ulong 자료형
uint unsignedInt = 4147483647;
ulong unsignedLong = 11223372036854775808;
Console.WriteLine(unsignedInt);
Console.WriteLine(unsignedLong);
Console.WriteLine();

// 2-28: int 자료형의 최대값과 최소값
Console.WriteLine(int.MaxValue);
Console.WriteLine(int.MinValue);
Console.WriteLine();

// 2-29: long 자료형의 최대값과 최소값
Console.WriteLine(long.MaxValue);
Console.WriteLine(long.MinValue);
Console.WriteLine();

// 2-32: sizeof 연산자
Console.WriteLine("int: " + sizeof(int));   // 4
Console.WriteLine("long: " + sizeof(long)); // 8
Console.WriteLine("float: " + sizeof(float));   // 4
Console.WriteLine("double: " + sizeof(double)); // 8
Console.WriteLine("char: " + sizeof(char)); // 2
Console.WriteLine();

// 2-33: 문자 자료형과 연산자
char a2 = 'a'; // 97
char b2 = 'b'; // 98

Console.WriteLine(a2 + b2); // 195
Console.WriteLine(a2 - b2); // -1
Console.WriteLine(a2 * b2); // 9506
Console.WriteLine(a2 / b2); // 0
Console.WriteLine(a2 % b2); // 97
Console.WriteLine();

// 2-35: sizeof 연산자와 string 자료형
// 오류 발생하므로 주석 처리
//Console.WriteLine("string: " + sizeof(string));
