using System;

class Copies {
    // 매개변수 int input = a; 와 같이 값을 복사하여 전달 받는다.
    static void Change(int input) {
        input = 20;
    }

    static void Main(string[] args) {
        // 6-30: 값 복사 예
        int a = 10;
        Change(a); // 값을 전달
        Console.WriteLine(a); // 10

        // 6-31: 간단한 값 복사 예
        int b = 10;
        int input = b; // a의 값을 복사하여 input에 할당
        input = 20;
        Console.WriteLine(a); // 10
    }
}
