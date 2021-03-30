using System;

class Test {
    public int Power(int x) {
        return x * x;
    }
}

class InstanceMethod {
    static void Main(string[] args) {
        // 인스턴스 메서드 생성과 사용
        Test test = new Test();
        Console.WriteLine(test.Power(10));
        Console.WriteLine(test.Power(20));
    }
}
