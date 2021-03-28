using System;

class Casts {
    static void Main(string[] args) {
        // 2-56: 자료형 변환
        // 오류 발생하므로 주석 처리
        //long longNumber = 2147483647L + 2147483647L;
        //int intNumber = longNumber; // 큰 자료형에서 작은 자료형으로는 묵시적 형변환 안됨
        //Console.WriteLine(intNumber);

        // 2-57: 강제 자료형 변환
        var a = (int)10.0;
        var b = (float)10;
        var c = (double)10;

        // 2-59: 강제 자료형 변환의 데이터 손실은 항상 일어나는 것은 아님
        long longNumber = 52273;
        int intNumber = (int)longNumber;
        Console.WriteLine(intNumber);
        Console.WriteLine();

        // 2-63: 문자열을 숫자로 변환
        // 오류 발생하므로 주석 처리
        //string numberString = "52273";
        //int intNumber = (int)numberString;
        //Console.WriteLine(intNumber);

        // 2-64: 숫자로 변환할 수 없는 문자열을 변환하는 경우
        // 예외 발생하므로 주석 처리
        //Console.WriteLine(int.Parse("52.273"));
        //Console.WriteLine(int.Parse("abc"));

        // 2-68: 간단한 문자열 변환
        int number = 52273;
        string outputA = number + "";
        Console.WriteLine(outputA);

        char character = 'a';
        string outputB = character + "";
        Console.WriteLine(outputB);
        Console.WriteLine();
    }
}
