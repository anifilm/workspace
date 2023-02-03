using System;

class Circle {
    double pi = 3.14;

    public double GetPi() {
        return pi;
    }

    public void SetPi(double value) {
        if (value <= 3 || value >= 3.15) {
            Console.WriteLine("문제 발생");
        }
        pi = value;
    }
}

class Program {
    static void Main(string[] args) {
        Circle o = new Circle();
        o.SetPi(3.14159);
        o.SetPi(3.5); // 출력: 문제 발생
    }
}
