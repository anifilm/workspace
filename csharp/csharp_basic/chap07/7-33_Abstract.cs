using System;

abstract class Parent {
    public abstract void Test() {}
}

class Child : Parent {
    public override void test() {}  // 오버라이딩 메서드를 반드시 생성해야 한다.
}

class Abstract {
    static void Main(string[] args) {
        // abstract 메서드와 관련되 오류 해결
        Parent parent = new Parent();
        Child child = new Child();

        parent.Test();
        child.Test();
    }
}
