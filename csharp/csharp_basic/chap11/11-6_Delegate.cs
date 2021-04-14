using System;

// 클래스 외부 선언
public delegate void TestDelegateA();

class Delegate {
    // 클래스 내부 선언
    public delegate void TestDelegateB();

    static void Main(string[] args) {
        // 델리게이터 생성 위치

        // 새로 선언한 델리게이터 자료형으로 변수를 선언
        TestDelegateA delegateA;
        TestDelegateB delegateB;
    }
}
