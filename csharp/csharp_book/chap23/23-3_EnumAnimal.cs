using System;

// 열거형으로 관련 있는 항목 묶기
enum Animal {
    Mouse,
    Cow,
    Tiger
}

class EnumAnimal {
    static void Main() {
        Animal animal = Animal.Tiger;
        Console.WriteLine(animal);  // "Tiger"

        if (animal == Animal.Tiger) {
            Console.WriteLine("호랑이");
        }
    }
}
