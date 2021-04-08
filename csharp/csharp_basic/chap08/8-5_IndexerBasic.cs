using System;

class SquareCalculator {
    public int this[int i] {
        get {
            return i * i;
        }
    }
}

class IndexerBasic {
    static void Main(string[] args) {
        // 인덱서로 배열처럼 사용하는 제곱 클래스
        SquareCalculator square = new SquareCalculator();
        Console.WriteLine(square[10]);
        Console.WriteLine(square[20]);
        Console.WriteLine(square[30]);
    }
}
