using System;

// 키모드에서 입력한 값 알아내기
while (true) {
    Console.WriteLine("아무키나 누르세요. (Q 입력시 종료)");

    ConsoleKeyInfo cki = Console.ReadKey(true);

    Console.WriteLine("{0}", cki.Key);  // 키
    Console.WriteLine("{0}", cki.KeyChar);   // 유니코드
    Console.WriteLine("{0}", cki.Modifiers); // Ctrl, Shift, Alt 조합
    Console.WriteLine();

    if (cki.Key == ConsoleKey.Q) {
        Console.WriteLine("Q를 입력하셨군요... 프로그램을 종료합니다.");
        break;
    }
}
