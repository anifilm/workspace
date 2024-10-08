using System;

class Person {
    public string _name; // 인스턴스 필드

    public Person(string name) { // 인스턴스 생성자
        _name = name;
    }

    public void OutputTourName() { // 인스턴스 메서드
        Console.WriteLine(_name);
    }
}

class Program {
    static void Main(string[] args) {
        Person person = new Person("홍길동"); // new를 통해 인스턴스 생성자에 접근
        person.OutputTourName(); // new로 생성된 객체의 인스턴스 메서드를 호출
        Console.WriteLine(person._name); // new로 생성된 객체의 인스턴스 필드에 접근
    }
}
