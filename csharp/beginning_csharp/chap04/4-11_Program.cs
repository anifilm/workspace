using System;

public class Computer {
    protected bool powerOn;
    public void Boot() { }
    public void ShutDown() { }
    public void Reset() { }
}

public class Notebook : Computer {
    bool fingerScan;
    public Book HasFingerScanDevice() { return fingerScan; }
}

public class Desktop : Computer {

}

public class Netbook : Computer {

}

public class DeviceManager {
    public void TurnOff(Computer device) {
        device.Shutdown();
    }
}

class Program {
    static void Main(string[] args) {
        // 암시적 형변환
        Computer[] machines = new Computer[] { new Notebook(), new Desktop(), new Netbook() };

        DeviceManager manager = new DeviceManager();
        foreach (Computer device in machines) {
            manager.TurnOff(device);
        }
    }
}
