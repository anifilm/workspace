using System;

// 한글 전부 출력
for (int i = '가'; i <= '힣'; i++) {
    Console.Write((char)i);
    if (i % 30 == 0) Console.WriteLine();
}
