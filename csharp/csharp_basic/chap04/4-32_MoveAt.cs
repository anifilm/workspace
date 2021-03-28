using System;
using System.Threading;

// 이동하는 달팽이
int x = 1;
while (x < 50) {
    // 화면을 지우고 커서를 이동
    Console.Clear();
    Console.SetCursorPosition(x, 5);

    // 출력
    if (x % 3 == 0)
        Console.WriteLine(" __@");
    else if (x % 3 == 1)
        Console.WriteLine("_^@");
    else
        Console.WriteLine("^_@");

    // 200밀리초 정지하고 x를 증가시킴
    Thread.Sleep(200);
    x++;
}
