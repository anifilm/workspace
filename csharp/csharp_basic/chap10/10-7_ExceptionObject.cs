using System;

class ExceptionObject {
    static void Main(string[] args) {
        // 예외 객체에서 정보 추출
        Console.Write("입력: ");
        string input = Console.ReadLine();

        try {
            int index = int.Parse(input);
            Console.WriteLine("입력 숫자: " + index);
        }
        catch (Exception e) {
            Console.WriteLine("예외가 발생했습니다.");
            Console.WriteLine(e.GetType());
            Console.WriteLine(e.Message);
            Console.WriteLine(e.StackTrace);
        }
    }
}
