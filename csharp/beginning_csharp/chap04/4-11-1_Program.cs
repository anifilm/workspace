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
    public void CloseLid() {
        if (powerOn == true) {
            Shutdown();
        }
    }
}

class Program {
    static void Main(string[] args) {
        Computer pc = new Computer();
        Notebook notebook = pc as Notebook;

        if (notebook != null) { // 코드대로라면 if문 내부의 코드가 실행될 가능성은 없다.
            notebook.CloseLid();
        }
    }
}
