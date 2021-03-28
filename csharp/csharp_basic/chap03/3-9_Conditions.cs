using System;

// 논리 연산자와 조건문
double score = 3.6;

if (score == 4.5)
    Console.WriteLine("신");
else if (4.2 <= score && score < 4.5)
    Console.WriteLine("교수님의 사랑");
else if (3.5 <= score && score < 4.2)
    Console.WriteLine("현 체제의 수호자");
else if (2.8 <= score && score < 3.5)
    Console.WriteLine("일반인");
else if (2.3 <= score && score < 2.8)
    Console.WriteLine("일탈을 꿈꾸는 소시민");
else if (1.75 <= score && score < 2.3)
    Console.WriteLine("오락문화의 선구자");
else if (1.0 <= score && score < 1.75)
    Console.WriteLine("불가촉천민");
else if (0.5 <= score && score < 1.0)
    Console.WriteLine("자벌레");
else if (0 < score && score < 0.5)
    Console.WriteLine("플랑크톤");
else
    Console.WriteLine("시대를 앞서가는 혁명의 씨앗");
