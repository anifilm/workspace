using System;

public class Computer {
    virtual public void Boot() {
        Console.WriteLine("메인보드 켜기");
    }
}

public class Notebook : Computer {
    /*
    override public void Boot() {
        Console.WriteLine("메인보드 켜기");
        Console.WriteLine("액정 화면 켜기");
    }
    */
    override public void Boot() {
        base.Boot(); // 부모 메서드를 사용
        Console.WriteLine("액정 화면 켜기");
    }
}

class Program {
    static void Main(string[] args) {
        Notebook notebook = new Notebook();
        notebook.Boot();
    }
}
