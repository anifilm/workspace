using System;

class ClassVariable {

    class MyMath {
        public static double PI = 3.141592;
    }

    static void Main(string[] args) {
        // 클래스 변수 생성과 사용
        Console.WriteLine(MyMath.PI);
    }
}
