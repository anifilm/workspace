using System;

class CallByReference {
    // 매개변수 ref int input = ref a; 와 같은 형식으로 값을 참조로 전달 받는다.
    static void Change(ref int input) {
        input = 20; // 참조로 전달된 값을 변경
    }

    static void Main(string[] args) {
        // 값을 참조로 전달
        int a = 10;
        Change(ref a); // 값을 참조로 전달
        Console.WriteLine(a); // 20

        ref int b = ref a; // 변수 a가 가리키는 메모리 주소값을 변수 b가 참조한다.
        b = 30;
        Console.WriteLine(a); // 30
    }
}
