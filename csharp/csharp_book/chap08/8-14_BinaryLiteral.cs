using System;

// 2진수 리터럴

// 0b 또는 0B로 2진수 리터럴을 입력할 수 있다.
byte b1 = 0b0010;  // 2진수 0010 -> 10진수 2
byte b2 = 0B1100;  // 2진수 1100 -> 10진수 12

// 출력시에는 십진수 단위로 처리
Console.WriteLine($"10진수: {b1}");  // 2
Console.WriteLine($"10진수: {b2}");  // 12
