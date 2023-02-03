using System;

public class Computer {
    bool powerOn;
    public void Boot() { }
    public void ShutDown() { }
    public void Reset() { }
}

public class Notebook : Computer {
    bool fingerScan;
    public Book HasFingerScanDevice() { return fingerScan; }
    public void CloseLid() {
        Shutdown(); // Notebook에서 추가된 메서드 내에서 부모의 메서드 호출
    }
}

public class Desktop : Computer {

}

public class Netbook : Computer {

}

class Program {
    static void Main(string[] args) {
        Notebook notebook = new Notebook();
        notebook.Book(); // Notebook 인스턴스에 대해 부모의 메서드 호출
    }
}
