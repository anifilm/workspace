using System;

class DoubleToString {
    static void Main() {
        // 소수점 제거
        double number = 52.273103;
        Console.WriteLine(number.ToString("0.0"));
        Console.WriteLine(number.ToString("0.00"));
        Console.WriteLine(number.ToString("0.000"));
        Console.WriteLine(number.ToString("0.0000"));
    }
}
