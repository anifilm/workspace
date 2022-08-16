using System;

// 절대값을 구하는 함수 만들기
class FunctionAbs {
    static int Abs(int num) {
        return (num < 0) ? -num : num;
    }

    static void Main() {
        int num = -21;
        int abs = Abs(num);
        Console.WriteLine($"{num}의 절대값: {abs}");
    }
}
