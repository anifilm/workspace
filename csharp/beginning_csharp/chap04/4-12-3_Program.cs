using System;

public class Computer {
    bool powerOn;
    public void Boot() { }
    public void Shutdown() { }
    public void Reset() { }
}

class Program {
    static void Main(string[] args) {
        Computer computer = new Computer();
        Type type = computer.GetType();

        Console.WriteLine(type.FullName); // Type클래스의 FullName 프로퍼티 호출
        Console.WriteLine(type.IsClass);  // Type클래스의 IsClass 프로퍼티 호출
        Console.WriteLine(type.IsArray);  // Type클래스의 IsArray 프로퍼티 호출

        int n = 5;
        string txt = "text";
        Type intType = n.GetType();
        Console.WriteLine(intType.FullName);
        Console.WriteLine(txt.GetType().FullName);

        type = typeof(double);
        Console.WriteLine(type.FullName);
        Console.WriteLine(typeof(System.Int16).FullName);
    }
}
