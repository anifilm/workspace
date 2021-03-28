using System;

// 무한 반복하면 이동
while (true) {
    ConsoleKeyInfo info = Console.ReadKey();
    switch (info.Key) {
        case ConsoleKey.UpArrow:
            Console.WriteLine("위로 이동");
            break;
        case ConsoleKey.DownArrow:
            Console.WriteLine("아래로 이동");
            break;
        case ConsoleKey.LeftArrow:
            Console.WriteLine("왼쪽으로 이동");
            break;
        case ConsoleKey.RightArrow:
            Console.WriteLine("오른쪽으로 이동");
            break;
        case ConsoleKey.Escape:
            goto Exit;
            // break;
    }
}

Exit:
    Console.WriteLine("프로그램을 종료합니다.");
