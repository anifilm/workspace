using System;

public class Computer {
    bool powerOn;
    public void Boot() { }
    public void Shutdown() { }
    public void Reset() { }
}

public class Notebook : Computer {
    bool fingerScan;
    public bool HasFingerScanDevice() { return fingerScan; }

    public void CloseLid() {
        base.Shutdown(); // base 예약어 사용 (부모 클래스를 명시적으로 가리킴)
    }
}

class Program {
    static void Main(string[] args) {

    }
}
