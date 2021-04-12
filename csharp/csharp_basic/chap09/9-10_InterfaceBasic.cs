using System;

// 인터페이스 생성
interface IBasic {
    int TestInstanceMethod(); // 메서드에 내부 구현을 입력할 수 없다.
    int TestProperty { get; set; } // 속성에도 마찬가지로 내부 구현을 입력할 수 없다.
}

// 인터페이스 상속
class TestClass : IBasic {
    // 인터페이스 구현
    public int TestInstanceMethod() {
        throw new NotImplementedException();
    }
    public int TestProperty {
        get {
            throw new NotImplementedException();
        }
        set {
            throw new NotImplementedException();
        }
    }
}

class InterfaceBasic {
    static void Main(string[] args) {
        // 인터페이스 다형성
        IBasic basic = new TestClass();
    }
}
