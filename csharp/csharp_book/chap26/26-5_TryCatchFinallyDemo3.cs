using System;

class TryCatchFinallyDemo3 {
    static void Main() {
        int x = 5;
        int y = 0;
        int r;

        try {  // 예외가 발생할만한 구문이 들어오는 곳
            r = x / y;  // 0으로 나누기 시도
            Console.WriteLine($"{x} / {y} = {r}");
        }
        catch {  // try 절에서 예외가 발생하면 실행
            Console.WriteLine("예외가 발생했습니다.");
        }
        finally {  // 예외가 발생하던 안하던 실행
            Console.WriteLine("프로그램을 종료합니다.");
        }
    }
}
