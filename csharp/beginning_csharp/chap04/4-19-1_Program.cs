using System;

class Mathematics {
    /*
    public int AbsInt(int value) {
        return (value >= 0) ? value : -value;
    }

    public double AbsDouble(double value) {
        return (value >= 0) ? value : -value;
    }

    public decimal AbsDecimal(decimal value) {
        return (value >= 0) ? value : -value;
    }
    */
    // 메서드 오버로드
    public int Abs(int value) {
        return (value >= 0) ? value : -value;
    }
    // 메서드 오버로드
    public double Abs(double value) {
        return (value >= 0) ? value : -value;
    }
    // 메서드 오버로드
    public decimal Abs(decimal value) {
        return (value >= 0) ? value : -value;
    }
}

class Program {
    static void Main(string[] args) {
        Mathematics math = new Mathematics();

        Console.WriteLine(math.Abs(-5)); // 출력 결과 5
        Console.WriteLine(math.Abs(-10.052)); // 출력 결과 10.052
        Console.WriteLine(math.Abs(20.01m)); // 출력 결과 20.01
    }
}
