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
        if (powerOn == true) { // 부모의 멤버 변수에 접근 가능
            Shutdown(); // Notebook에서 추가된 메서드 내에서 부모의 메서드 호출
        }
    }
}

class Program {
    static void Main(string[] args) {
        Notebook notebook = new Notebook();
        Computer pc1 = notebook; // 부모 타입으로 암시적 형변환
        pc1.Boot();
        pc1.ShutDown();

        Computer pc2 = new Computer();
      //Notebook notebook = (Notebook)pc2; // 명시적 형변환, 컴파일은 가능하나 실행시 오류 발생

        notebook = new Notebook();
        pc1 = notebook; // 부모 타입으로 암시적 형변환

        Notebook notebook2 = (Notebook)pc1; // 다시 본래 타입으로 명시적 형변환
        notebook2.CloseLid();
    }
}
