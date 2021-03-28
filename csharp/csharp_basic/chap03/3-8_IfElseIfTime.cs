using System;

// if else if 조건문
if (DateTime.Now.Hour < 11) {
    Console.WriteLine("아침 먹을 시간입니다.");
}
else if (DateTime.Now.Hour < 15) {
    Console.WriteLine("점심 먹을 시간입니다.");
}
else {
    Console.WriteLine("저녁 먹을 시간입니다.");
}
