using System;

class Parent {
    public Parent() {
        Console.WriteLine("Parent()");
    }
    public Parent(int param) {
        Console.WriteLine("Parent(int param)");
    }
    public Parent(string param) {
        Console.WriteLine("Parent(string param)");
    }
}

// base 키워드를 사용한 생성자 지정 (2)
class Child : Parent {
    public Child() : base(10) {  // Parent(int param) 부모 생성자 호출
        Console.WriteLine("Child() : base(10)");
    }
    public Child(string input) : base(input) {
        Console.WriteLine("Child(string input) : base(input)");
    }
}

class ConstructorSequences {
    static void Main(string[] args) {

        Child childA = new Child();
        Child childB = new Child("string");
    }
}
