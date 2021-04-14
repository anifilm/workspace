using System;

class ThrowBasic {
    static void Main(string[] args) {
        // 강제로 던진 예외의 예외 처리
        try {
            throw new Exception();
        }
        catch (Exception e) {
            Console.WriteLine("예외가 발생했습니다.");
        }
    }
}
