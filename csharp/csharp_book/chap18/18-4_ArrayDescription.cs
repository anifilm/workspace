using System;

// 1차원 배열 만들기

// [1] 배열 선언, [2] 배열 요소 생성
ushort[] numbers = new ushort[2];  // 요소수가 2이므로, [0], [1] 사용

// [3] 배열 초기화
numbers[0] = 3840;
numbers[1] = 2160;

// [4] 배열 사용
Console.WriteLine($"{numbers[0]} * {numbers[1]}");  // 3840 * 2160
