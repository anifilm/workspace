using System;

class Dummy : IDisposable {

    public void Dispose() {
        Console.WriteLine("Dispose() 메서드를 호출합니다.");
    }
}
class IDisposableBasic {
    static void Main(string[] args) {
        // IDisposable 인터페이스 상속
        Dummy dummyA = new Dummy();
        dummyA.Dispose();

        // using 키워드와 IDisposable 인터페이스
        using (Dummy dummyB = new Dummy()) {

        }
    }
}
