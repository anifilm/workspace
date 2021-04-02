using System;

class ShadowAndHide {
    public static int number = 10;  // 정적 변수 선언

    static void Main(string[] args) {
        // 섀도잉
        int number = 20;  // 지역 변수에 의해 정적 변수가 가려진다.
        Console.WriteLine(number);  // 20
    }
}
