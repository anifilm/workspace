using System;

class Test {
    public int Multi(int x, int y) {
        return x * y;
    }

    public void Print() {
        Console.WriteLine("Print() 메서드가 호출되었습니다.");
    }
}

class Methods {
    static void Main(string[] args) {
        // 6-2: 두 개의 매개변수를 갖는 메서드
        Test test = new Test();

        Console.WriteLine(test.Multi(52, 273));
        Console.WriteLine(test.Multi(103, 32));
        Console.WriteLine();

        // 6-3: 아무 것도 반환하지 않는 메서드
        Test test2 = new Test();
        test2.Print();
        test2.Print();
        test2.Print();
    }
}
