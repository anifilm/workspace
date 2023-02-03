using System;

class Circle {
    public double pi = 3.14;

    public double GetPi() {
        return pi;
    }

    public void SetPi(double value) {
        pi = value;
    }
}

class Program {
    static void Main(string[] args) {
        Circle o = new Circle();
        o.pi = 3.14159; // 쓰기
        double piValue = o.pi; // 읽기
    }
}
