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
        Notebook notebook = new Notebook();
        Desktop desktop = new Desktop();
        Netbook netbook = new Netbook();

        DeviceManager manager = new DeviceManager();
        manager.TurnOff(notebook);
        manager.TurnOff(desktop);
        manager.TurnOff(netbook);
    }
}
