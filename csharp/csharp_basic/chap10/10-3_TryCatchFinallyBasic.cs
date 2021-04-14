using System;

class TryCatchFinallyBasic {
    static void Main(string[] args) {
        // 예외 상황 확인 및 고급 예외 처리
        Console.Write("입력: ");
        string input = Console.ReadLine();

        try {
            int index = int.Parse(input);
            Console.WriteLine("입력 숫자: " + index);
        }
        catch (Exception e) {
            Console.WriteLine("예외가 발생했습니다.");
            Console.WriteLine(e.GetType());
        }
        finally {
            Console.WriteLine("프로그램을 종료합니다.");
        }
    }
}
