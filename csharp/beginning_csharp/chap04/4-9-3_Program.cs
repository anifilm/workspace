using System;

public class Computer {
    protected bool powerOn;
    public void Boot() { }
    public void Shutdown() { }
    public void Reset() { }
}

class Notebook : Computer {

}

sealed class Pen { // sealed 상속을 제한

}

public class ElectricPen : Pen { // 오류 발생 (제한된 상속을 사용)

}

class Monitor {

}

class Notebook2 : Computer, Monitor { // 오류 발생 (다중 상속 사용)

}

class Program {
    static void Main(string[] args) {

    }
}
