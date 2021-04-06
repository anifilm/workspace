using System;

// 나누기(/) 연산자
double i = 1.5;
double j = 0.5;
double k = i / j;  // 1.5 / 0.5
Console.WriteLine(k); // 3
Console.WriteLine();

/*
정수 나누기 (몫을 출력한다. 소수점 이하X)
13 / 5 = 2

실수 나누기 (일반적인 나눗셈 결과)
13 / 5.0 = 2.6
*/

Console.WriteLine("정수 나누기 13 / 5   의 결과 몫: {0}, 나머지: {1}",(13 / 5), (13 % 5));
Console.WriteLine("실수 나누기 13 / 5.0 의 결과: {0}", (13 / 5.0));
