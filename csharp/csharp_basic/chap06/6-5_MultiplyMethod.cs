using System;

class Test {
    public int Multiply(int min, int max) {
        int output = 1;
        for (int i = min; i <= max; i++) {
            output *= i;
        }
        return output;
    }
}

class MultiplyMethod {
    static void Main(string[] args) {
        // 매개변수와 반환 (2)
        Test test = new Test();

        Console.WriteLine(test.Multiply(1, 10));
    }
}
