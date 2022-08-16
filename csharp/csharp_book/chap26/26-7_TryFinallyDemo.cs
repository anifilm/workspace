using System;

class TryFinallyDemo {
    static void Main() {
        Console.WriteLine("[1] 시작");

        try {  // 에러가 발생할만한 코드 들어오는 영역
            Console.WriteLine("[2] 실행");
            throw new Exception();  // 무작정 에러 발생
        }
        finally {  // try절에서 에러가 발생하던 안하던 반드시 실행하는 영역(마무리 영역)
            Console.WriteLine("[3] 종료");
        }
    }
}
