using System;
using System.Collections.Generic;

class Animal {
    public virtual void Eat() {  // 가상 메서드 선언
        Console.WriteLine("냠냠 먹습니다.");
    }
}

class Dog : Animal {
    public override void Eat() {  // 오버라이딩 메서드
        Console.WriteLine("강아지 사료를 먹습니다.");
    }
}

class Cat : Animal {
    public override void Eat() {  // 오버라이딩 메서드
        Console.WriteLine("고양이 사료를 먹습니다.");

    }
}

class UsageOfOverriding {
    static void Main(string[] args) {
        // 오버라이딩
        List<Animal> animals = new List<Animal>() {
            new Dog(), new Cat(), new Cat(), new Dog(),
            new Dog(), new Cat(), new Dog(), new Dog()
        };

        foreach (var item in animals) {
            item.Eat();  // Eat 메서드 호출
        }
    }
}
