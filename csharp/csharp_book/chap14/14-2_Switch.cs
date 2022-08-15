using System;

Console.WriteLine("정수를 입력하세요.");
int answer = Convert.ToInt32(Console.ReadLine());

// 선택문
switch(anwser) {
    case 1:
        Console.WriteLine("1을 선택했습니다.");
        break;
    case 2:
        Console.WriteLine("2를 선택했습니다.");
        break;
    case 3:
        Console.WriteLine("3을 선택했습니다.");
        break;
    default:
        Console.WriteLine("그냥 찍으셨군요.");
        break;
}
