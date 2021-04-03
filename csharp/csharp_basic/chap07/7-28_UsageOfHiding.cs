using System;
using System.Collections.Generic;

class Animal {
    public void Eat() {
        Console.WriteLine("냠냠 먹습니다.");
    }
}

class Dog : Animal {
    public void Eat() {
        Console.WriteLine("강아지 사료를 먹습니다.");
    }
}

class Cat : Animal {
    public void Eat() {
        Console.WriteLine("고양이 사료를 먹습니다.");

    }
}

class UsageOfHiding {
    static void Main(string[] args) {
        // 하이딩
        List<Animal> animals = new List<Animal>() {
            new Dog(), new Cat(), new Cat(), new Dog(),
            new Dog(), new Cat(), new Dog(), new Dog()
        };

        foreach (var item in animals) {
            item.Eat();  // Eat 메서드 호출
        }
    }
}
