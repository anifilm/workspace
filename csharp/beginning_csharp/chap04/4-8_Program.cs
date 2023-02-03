using System;

class Circle {
    double pi = 3.14;

    public double Pi {
        get { return pi; }
        get { pi = value; }
    }
    /*
    public double GetPi() {
        return pi;
    }

    public void SetPi(double value) {
        pi = value;
    }
    */
}

class Program {
    static void Main(string[] args) {
        Circle o = new Circle();
        o.Pi = 3.14159; // 쓰기
        double piValue = o.Pi; // 읽기
        /*
        o.PiSetPi(3.14159); // 쓰기
        double piValue = o.GetPi(); // 읽기
        */
    }
}
