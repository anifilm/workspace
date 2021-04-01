using System;
using System.Collections.Generic;

class Animal {
    public int age { get; set; }

    public Animal() {
        this.age = 0;
    }

    public void Eat() {
        Console.WriteLine("냠냠 먹습니다.");
    }
    public void Sleep() {
        Console.WriteLine("쿨쿨 잠을 잡니다.");
    }
}

class Dog : Animal {
    public string color { get; set; }

    public void Bark() {
        Console.WriteLine("왈왈 짓습니다.");
    }
}

class Cat : Animal {
    public void Meow() {
        Console.WriteLine("냥냥 웁니다.");
    }
}

class CInheritance {
    static void Main(string[] args) {

        List<Animal> animals = new List<Animal>() {
            new Dog(), new Dog(), new Dog(),
            new Cat(), new Cat(), new Cat()
        };

        foreach (var item in animals) {
            item.Eat();
            item.Sleep();

            // 7-17: as 키워드를 사용하는 일반적인 형태
            var dog = item as Dog;
            if (dog != null) {
                dog.Bark();
            }

            var cat = item as Cat;
            if (cat != null) {
                cat.Meow();
            }
        }
    }
}
