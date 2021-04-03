using System;

class Parent {
    public virtual void Test() {}
}

class Child : Parent {
    sealed public void Test() {}  // sealed 메서드로 선언
}

class GrandChild : Child {
    public override void Test() {}  // 여기서 오류 발생
}
class Sealed {
    static void Main(string[] args) {
        // sealed 메서드 오류
        Parent parent = new Parent();
        Child child = new Child();
        GrandChild grandChild = new GrandChild();

        parent.Test();
        child.Test();
        grandChild.Test();
    }
}
