using System;

class Parent {
    public void Method() {
        Console.WriteLine("부모의 메서드");
    }
}

class Child : Parent {
    // 상속받은 부모의 메서드가 해당 메서드에 의해 숨겨진다는(hiding) 경고 발생
    public void Method() {
        Console.WriteLine("자식의 메서드");
    }
}

class ShadowAndHide {
    static void Main(string[] args) {
        // 메서드 하이딩
        Child child = new Child();
        child.Method();
        ((Parent)child).Method();
    }
}
