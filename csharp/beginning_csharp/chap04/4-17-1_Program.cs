using System;

class Mammal {
    // 가상 메서드 (자식 클래스에서 함수를 재정의 할 수 있도록 허용)
    virtual public void Move() {
        Console.WriteLine("이동한다.");
    }
}

class Lion : Mammal {
    // 메서드 오버라이드
    override public void Move() {
        Console.WriteLine("네 발로 움직인다.");
    }
}

class Whale : Mammal {
    // 메서드 오버라이드
    override public void Move() {
        Console.WriteLine("수영한다.");
    }
}

class Human : Mammal {
    // 메서드 오버라이드
    override public void Move() {
        Console.WriteLine("두 발로 움직인다.");
    }
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
