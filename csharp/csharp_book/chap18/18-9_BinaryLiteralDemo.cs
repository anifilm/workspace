using System;

// Binary Literal
//int[] numbers = { 1, 2, 4, 8 };
int[] numbers = { 0b1, 0b10, 0b0100, 0b00001000 };  // 이진수가 저장된 배열

foreach (var number in numbers) {
    Console.WriteLine(number);
}
