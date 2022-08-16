using System;

// Digit Separator
int num = 1_000_000;  // 1,000,000의 표현 방식
int[] numbers = { 0b1, 0b10, 0b0100, 0b0000_1000 };

Console.WriteLine(num);
foreach (var number in numbers) {
    Console.WriteLine(number);
}
