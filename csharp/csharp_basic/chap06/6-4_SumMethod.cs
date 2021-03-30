using System;

class Test {
    public int Sum(int min, int max) {
        int output = 0;
        for (int i = min; i <= max; i++) {
            output += i;
        }
        return output;
    }
}

class SumMethod {
    static void Main(string[] args) {
        // 매개변수와 반환 (1)
        Test test = new Test();

        Console.WriteLine(test.Sum(1, 100));
    }
}
