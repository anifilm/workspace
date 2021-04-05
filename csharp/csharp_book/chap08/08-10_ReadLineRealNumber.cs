using System;

// 실수를 문자열로 입력받아 실수로 변환
Console.Write("실수를 입력하세요: ");
string input = Console.ReadLine();  // 문자열 입력
double number = Convert.ToDouble(input);  // 실수로 형 변환
Console.WriteLine($"{number} - {number.GetType()}");
