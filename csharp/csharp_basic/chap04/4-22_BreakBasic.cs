using System;

// break 키워드
while (true) {
    Console.Write("숫자를 입력해주세요(짝수를 입력하면 종료): ");
    int input = int.Parse(Console.ReadLine());
    if (input % 2 == 0) {
        break;
    }
}
