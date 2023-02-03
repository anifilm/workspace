using System;

class Circle {
    double pi = 3.14;

    double GetArea(double radius) {
        return radius * radius * pi;
    }

    public void Print(double value) {
        Console.WriteLine(GetArea(value));
    }
}

class Program {
    static void Main(string[] args) {
        Circle o = new Circle();
      //o.Print = 6.28; // 오류 발생: 접근 불가
      //o.GetArea(10);  // 오류 발생: 접근 불가
        o.Print(10); // public 멤버이므로 호출 가능
    }
}
