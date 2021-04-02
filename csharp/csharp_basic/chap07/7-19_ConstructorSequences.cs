using System;

class Parent {
    public Parent() {
        Console.WriteLine("부모 생성자");
    }
}

// base 키워드를 사용한 생성자 지정 (1)
class Child : Parent {
    public Child() : base() {  // base 키워드 사용
        Console.WriteLine("자식 생성자");
    }
}

class ConstructorSequences {
    static void Main(string[] args) {

        Child child = new Child();
    }
}
