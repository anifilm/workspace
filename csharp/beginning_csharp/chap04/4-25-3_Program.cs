using System;

interface IPower {
    void TurnOn();
}

class Computer : IPower {
    public void TurnOn() {
        Console.WriteLine("Computer: TurnOn");
    }
}

class Monitor : IPower {
    public void TurnOn() {
        Console.WriteLine("Monitor: TurnOn");
    }
}

class Switch {
    public void PowerOn(IPower machine) { // 특정 타입 -> 인터페이스
        machine.TurnOn();
    }
}

class Program {
    static void Main(string[] args) {
        Computer computer = new Computer();
        Switch sw = new Switch();

        sw.PowerOn(computer);

        Monitor monitor = new Monitor();

        sw.PowerOn(monitor);
    }
}
