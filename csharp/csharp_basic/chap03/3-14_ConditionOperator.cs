using System;

// 삼항 연산자를 이용한 자연수 판별
string input = Console.ReadLine();
int number = int.Parse(input);

Console.WriteLine(number > 0 ? "자연수입니다." : "자연수가 아닙니다.");
