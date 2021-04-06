using System;

// 입력받은 문자열을 정수로 변환해서 출력
Console.Write("정수를 입력하세요: ");
string input = Console.ReadLine();  // 문자열 입력
int number = Convert.ToInt32(input);  // 정수로 형 변환
Console.WriteLine($"{number} - {number.GetType()}");
