using System;

class MyMath {
    public static int Abs(int input) {
        if (input < 0) {
            return -input;
        }
        else {
            return input;
        }
    }
}

class ClassMethod {
    static void Main(string[] args) {
        // 정적 메서드 생성과 사용
        Console.WriteLine(MyMath.Abs(52));
        Console.WriteLine(MyMath.Abs(-273));
    }
}
