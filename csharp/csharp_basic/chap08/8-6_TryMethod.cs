using System;

class TryMethod {
    static void Main(string[] args) {
        // int.TryParse() 메서드
        Console.Write("숫자 입력: ");
        int output;
        bool result = int.TryParse(Console.ReadLine(), out output);

        if (result) {
            Console.WriteLine("입력한 숫자: " + output);
        }
        else {
            Console.WriteLine("숫자를 입력해주세요.");
        }
    }
}
