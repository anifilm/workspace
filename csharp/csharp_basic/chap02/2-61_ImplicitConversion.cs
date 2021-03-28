using System;

class ImplicitConversion {
    static void Main() {
        // 자동 자료형 변환
        int intNumber = 2147483647;
        long intToLong = intNumber; // int 자료형을 long 자료형으로 자동 형변환
        Console.WriteLine(intToLong);

        double intToDouble = intNumber; // int 자료형을 double 자료형으로 자동 형변환
        Console.WriteLine(intToDouble);
    }
}

/*
현재 자료형보다 큰 자료형으로는 자동 형변환 가능
*/
