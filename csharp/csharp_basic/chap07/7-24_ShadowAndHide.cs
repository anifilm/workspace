using System;

class Parent {
    public int variable = 273;
}

class Child : Parent {
    // 상속받은 부모의 변수가 해당 변수에 의해 숨겨진다는(hiding) 경고 발생
    public string variable = "hiding";
}

class ShadowAndHide {
    static void Main(string[] args) {
        // 숨겨진 멤버를 찾는 방법
        Child child = new Child();
        Console.WriteLine(((Parent)child).variable);  // 273
    }
}
