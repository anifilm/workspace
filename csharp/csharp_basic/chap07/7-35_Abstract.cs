using System;

abstract class Parent {  // 추상 클래스로 선언
    public void Test() {}
}

class Child : Parent {
    public void test() {}
}

class Abstract {
    static void Main(string[] args) {
        // abstract 클래스 오류
        Parent parent = new Parent();  // 여기서 오류 발생
        Child child = new Child();

        parent.Test();
        child.Test();
    }
}
