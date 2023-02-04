using System;

class Mammal {
    public void Move() {
        Console.WriteLine("이동한다.");
    }
}

class Lion : Mammal {
    // 메서드 오버라이드 (메서드 이름만 사용)
    new public void Move() { }
}

class Whale : Mammal {
    // 메서드 오버라이드 (메서드 이름만 사용)
    new public void Move() { }
}

class Human : Mammal {
    // 메서드 오버라이드 (메서드 이름만 사용)
    new public void Move() { }
}

class Program {
    static void Main(string[] args) {
        Lion lion = new Lion();
        Mammal one = lion; // 부모 타입으로 형변환
        one.Move();

        Human human = new Human();
        Mammal two = human;
        two.Move();
    }
}
