using System;

class DelegateOperator {
    public delegate void SendString(string message);

    static void Main(string[] args) {
        // 델리게이터 뎃셈과 뺄셈
        SendString sayHello, sayGoodbye, multiDelegate;

        sayHello = Hello;
        sayGoodbye = Goodbye;

        multiDelegate = sayHello + sayGoodbye;
        multiDelegate("윤인성");

        Console.WriteLine();

        multiDelegate -= sayGoodbye;
        multiDelegate("윤인성");
    }

    public static void Hello(string message) {
        Console.WriteLine("안녕하세요. " + message + "씨...!");
    }

    public static void Goodbye(string message) {
        Console.WriteLine("안녕히 가세요. " + message + "씨...!");
    }
}
