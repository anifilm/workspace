using System;
using System.Collections.Generic;

class Dog { // Dog 클래스
    public int age { get; set; }
    public string color { get; set; }

    public Dog() {
        this.age = 0;
    }

    public void Eat() {
        Console.WriteLine("냠냠 먹습니다.");
    }
    public void Sleep() {
        Console.WriteLine("쿨쿨 잠을 잡니다.");
    }
    public void Bark() {
        Console.WriteLine("왈왈 짓습니다.");
    }
}

class Cat { // Cat 클래스
    public int age { get; set; }

    public Cat() {
        this.age = 0;
    }

    public void Eat() {
        Console.WriteLine("냠냠 먹습니다.");
    }
    public void Sleep() {
        Console.WriteLine("쿨쿨 잠을 잡니다.");
    }
    public void Meow() {
        Console.WriteLine("냥냥 웁니다.");
    }
}

class AInheritance {
    static void Main(string[] args) {
        // Dog와 Cat 클래스의 인스턴스를 만들고 메서드 실행
        List<Dog> dogs = new List<Dog>() {
            new Dog(), new Dog(), new Dog()
        };
        List<Cat> cats = new List<Cat>() {
            new Cat(), new Cat(), new Cat()
        };

        foreach (var item in dogs) {
            item.Eat();
            item.Sleep();
            item.Bark();
        }

        foreach (var item in cats) {
            item.Eat();
            item.Sleep();
            item.Meow();
        }
    }
}
