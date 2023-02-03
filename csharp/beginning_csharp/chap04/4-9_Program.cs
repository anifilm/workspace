using System;

public class Computer {
    bool powerOn;
    public void Boot() { }
    public void ShutDown() { }
    public void Reset() { }
}

public class Notebook : Computer {
    bool fingerScan; // Notebook 타입에 해당하는 멤버만 추가
    public Book HasFingerScanDevice() { return fingerScan; }
}

public class Desktop : Computer {

}

public class Netbook : Computer {

}

class Program {
    static void Main(string[] args) {
        Computer computer = new Computer();
        Notebook notebook = new Notebook();
        Desktop desktop = new Desktop();
        Netbook netbook = new Netbook();
    }
}
