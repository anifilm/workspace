using System;

class StringPlusNumber {
    static void Main() {
        // 숫자와 문자열 덧셈
        Console.WriteLine(52 + 273);
        Console.WriteLine("52" + 273); // 숫자는 문자열로 자동 형변환되어 문자열 연결된다.
        Console.WriteLine(52 + "273"); // 숫자는 문자열로 자동 형변환되어 문자열 연결된다.
        Console.WriteLine("52" + "273");
    }
}
