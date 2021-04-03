using System;

sealed class Parent {  // sealed 클래스로 선언
    public void Test() {}
}

class Child : Parent {  // 여기서 오류 발생
    public void Test() {}
}
class Sealed {
    static void Main(string[] args) {
        // sealed 클래스 오류
        Parent parent = new Parent();
        Child child = new Child();

        parent.Test();
        child.Test();
    }
}
