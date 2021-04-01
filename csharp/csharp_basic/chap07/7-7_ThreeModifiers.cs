using System;

class Anial {
    // 세 가지 접근 제한자
    private void Private() {}
    protected void Protected() {}
    public void Public() {}

    public void TestA() {
        Private();
        Protected();
        Public();
    }
}

class Dog : Animal {
    public void TestB() {
        Protected();
        Public();
    }
}

class ThreeModifiers {
    static void Main(string[] args) {

        Dog dog = new Dog();
        dog.Public();
    }
}
