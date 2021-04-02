using System;

class Parent {
    public Parent() {
        Console.WriteLine("부모 생성자");
    }
}

class Child : Parent {
    public Child() {
        Console.WriteLine("자식 생성자");
    }
}

class ConstructorSequences {
    static void Main(string[] args) {
        // 상속했을 때 기본적인 생성자 호출 순서
        Child child = new Child();  // 자식 인스턴스를 생성합니다.
    }
}
