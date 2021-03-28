using System;

// 시간을 사용한 반복문 이탈
long start = DateTime.Now.Ticks;
long count = 0;

while (start + (10000000) > DateTime.Now.Ticks) {
    count++;
}

Console.WriteLine(count + "만큼 반복했습니다.");
