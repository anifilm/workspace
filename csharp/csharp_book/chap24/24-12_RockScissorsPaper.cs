using System;

class RockScissorsPaper {
    static void Main() {
        int iRandom = 0;  // 1(가위), 2(바위), 3(보)
        int iSelection = 0;  // 사용자 입력(1~3)

        // 0번째 인덱스 "가위", 1번째 인덱스 "바위", 2번째 인덱스 "보"
        string[] choice = { "가위", "바위", "보" };

        // 컴퓨터의 랜덤값 지정
        iRandom = (new Random()).Next(1, 4);

        Console.Write("1(가위), 2(바위), 3(보) 입력: _\b");
        iSelection = Convert.ToInt32(Console.ReadLine());

        // 사용자로부터 입력받은 값에서 1을 빼야 배열의 인덱스에 위치하는 문자열과 일치
        Console.WriteLine("\n 사용자: {0}", choice[iSelection - 1]);
        Console.WriteLine(" 컴퓨터: {0}\n", choice[iRandom - 1]);

        // 결과 출력
        if (iSelection == iRandom) {
            Console.WriteLine("비김");
        }
        else {
            switch (iSelection) {
                case 1:
                    Console.WriteLine((iRandom == 3) ? "승" : "패");
                    break;
                case 2:
                    Console.WriteLine((iRandom == 1) ? "승" : "패");
                    break;
                case 3:
                    Console.WriteLine((iRandom == 2) ? "승" : "패");
                    break;
            }
        }
    }
}
