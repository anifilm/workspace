using System;

// 홀수 짝수 구분하기
Console.WriteLine("숫자 입력: ");
int input = int.Parse(Console.ReadLine());

if (input % 2 == 0) {
    Console.WriteLine("짝수입니다.");
}
else {
    Console.WriteLine("홀수입니다.");
}
