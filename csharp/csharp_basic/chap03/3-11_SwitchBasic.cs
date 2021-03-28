using System;

// switch 조건문
Console.WriteLine("숫자를 입력하세요: ");
int input = int.Parse(Console.ReadLine());

switch (input % 2) {
    case 0:
        Console.WriteLine("짝수입니다.");
        break;
    case 1:
        Console.WriteLine("홀수입니다.");
        break;
}
