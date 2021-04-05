using System;

// 입력받은 문자열을 문자로 변환해서 출력
Console.Write("문자를 입력하세요: ");
string input = Console.ReadLine();  // 문자열 입력
char chr = Convert.ToChar(input);  // 문자로 형 변환
Console.WriteLine($"{chr} - {chr.GetType()}");
