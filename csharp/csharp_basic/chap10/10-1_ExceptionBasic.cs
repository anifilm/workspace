using System;

class ExceptionBasic {
    static void Main(string[] args) {
        // 예외 상황 확인 및 기본 예외 처리
        string[] array = {"가", "나"};
        Console.Write("숫자를 입력해주세요: ");
        int input = int.Parse(Console.ReadLine());
        if (input < array.Length) {
            Console.WriteLine("입력한 위치의 값은 '" + array[input] + "'입니다.");
        }
        else {
            Console.WriteLine("인덱스 범위를 초과하였습니다.");
        }
    }
}
