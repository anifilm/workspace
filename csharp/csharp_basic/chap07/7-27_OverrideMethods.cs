using System;

class Parent {
    // 부모의 메서드에 virtual 키워드를 적용
    public virtual void Method() {
        Console.WriteLine("부모의 메서드");
    }
}

class Child : Parent {
    // 자식의 메서드에 override 키워드를 적용
    public override void Method() {
        Console.WriteLine("자식의 메서드");
    }
}

class OverrideMethods {
    static void Main(string[] args) {
        // virtual과 override 메서드를 사용한 오버라이딩
        Child child = new Child();
        child.Method();
        ((Parent)child).Method();  // 자식 객체에서 형 변환을 통한 부모 메서드 호출시 오버라이딩 된 메서드를 호출하게 된다.

        Parent parent = new Parent();
        parent.Method();
    }
}
