using System;

class Parent {
    public int variable = 273;

    public void Method() {
        Console.WriteLine("부모의 메서드");
    }
}

class Child : Parent {
    // new 키워드를 사용해 변수를 하이딩하겠다고 선언
    public new string variable = "hiding";

    // new 키워드를 사용해 메서드를 하이딩하겠다고 선언
    public new void Method() {
        Console.WriteLine("자식의 메서드");
    }
}

class NewMethods {
    static void Main(string[] args) {
        // new 메서드를 사용한 하이딩
        Child child = new Child();
        child.Method();
        ((Parent)child).Method();
    }
}
