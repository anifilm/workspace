using System;

class Computer {
    public void TurnOn() {
        Console.WriteLine("Computer: TurnOn");
    }
}

class Monitor {
    public void TurnOn() {
        Console.WriteLine("Monitor: TurnOn");
    }
}

class Switch {
    public void PowerOn(Computer machine) { // Computer 타입을 직접 사용
        machine.TurnOn();
    }
    // public void PowerOn(Monitor machine) { ... // Monitor 타입을 직접 사용
}

class Program {
    static void Main(string[] args) {
        Computer computer = new Computer();
        Switch sw = new Switch();

        sw.PowerOn(computer);

        Monitor monitor = new Monitor();

        // sw.PowerOn(monitor);
    }
}
