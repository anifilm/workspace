using System;

class Parent { }

// 한 개의 클래스와 두 개의 인터페이스를 상속 받는다.
class Child : Parent, IDisposable, IComparable {
    // IDispose 인터페이스 구현
    public void Dispose() {
        throw new NotImplementedException();
    }
    // IComparable 인터페이스 구현
    public int CompareTo(object obj) {
        throw new NotImplementedException();
    }
}

class Interface {
    static void Main(string[] args) {
        // 다중 상속과 다형성
        Child child = new Child();
        Parent childAsParent = new Child();
        IDisposable childAsDisposable = new Child();
        IComparable childAsComparable = new Child();
    }
}
