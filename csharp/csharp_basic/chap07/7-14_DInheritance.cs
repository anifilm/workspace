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

            // 7-14: is 키워드
            if (item is Dog) { // 만약 변수 item이 Dog 클래스라면
                // 7-15: 일반적인 자료형 변환
                //((Dog)item).Bark();

                // 7-16: as 키워드를 사용한 자료형 변환
                (item as Dog).Bark();
            }
            if (item is Cat) { // 만약 변수 item이 Cat 클래스라면
                // 7-15: 일반적인 자료형 변환
                //((Cat)item).Meow();

                // 7-16: as 키워드를 사용한 자료형 변환
                (item as Cat).Meow();
            }
        }
    }
}
