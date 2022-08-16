using System;

class As {
    static void Main() {
        object x = 1234;
        string s = x as string;  // 문자열로 변환 불가능 null 처리됨
        Console.WriteLine(s == null ? "null" : s);
    }
}
