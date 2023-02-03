using System;

public class DeviceManager {
}

public class DeviceManager2 : object {
}

public class Computer {
    bool powerOn;
    public void Boot() { }
    public void Shutdown() { }
    public void Reset() { }
}

public class Notebook : Computer {
    bool fingerScan;
    public bool HasFingerScanDevice() { return fingerScan; }
}

class Program {
    static void Main(string[] args) {
        Computer computer = new Computer();
        object obj1 = computer;
        Computer pc1 = obj1 as Computer;

        Notebook notebook = new Notebook();
        object obj2 = notebook;
        Notebook pc2 = obj2 as Notebook;
    }
}
