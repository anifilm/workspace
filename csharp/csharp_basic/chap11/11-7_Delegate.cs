using System;

class Delegate {

    public delegate void TestDelegate();

    static void Main(string[] args) {
        // 델리게이터 초기화 방법
        TestDelegate deletageA = TestMethod; // 메서드 이름을 사용한 초기화
        TestDelegate deletageB = delegate() { }; // 무명 델리데이터를 사용한 초기화
        TestDelegate deletageC = () => { }; // 람다를 사용한 초기화

        // 델리게이터는 일반 메서드와 같이 호출
        delegateA();
        delegateB();
        deletageC();
    }

    static void TestMethod() {

    }
}
