using System;

class Parent {
    public static int counter = 0;  // 정적 변수 counter를 선언

    public void CountParent() {
        Parent.counter++;  // Parent 클래스의 counter 변수를 증가시킴
    }
}

class Child : Parent {
    public void CountChild() {
        Child.counter++;  // Child 클래스의 counter 변수를 증가시킴
    }
}

class ClassVariableOnInheritance {
    static void Main(string[] args) {
        // 클래스 변수 상속
        Parent parent = new Parent();
        Child child = new Child();

        parent.CountParent();  // 1
        child.CountChild();    // 2

        Console.WriteLine(Parent.counter); // 2
        Console.WriteLine(Child.counter);  // 2, 정적 변수는 상속시에 공유된다.
    }
}
