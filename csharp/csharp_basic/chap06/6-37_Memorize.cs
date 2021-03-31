using System;
using System.Collections.Generic;

class Fibonacci {
    // 계산한 피보나치 수를 저장하는 Dictionary 객체 생성
    private static Dictionary<int, long> memo = new Dictionary<int, long>();

    public static long Get(int i) {
        if (i < 0) { return 0; }
        if (i == 1) { return 1; }

        // 이미 계산했던 값인지 확인
        if (memo.ContainsKey(i)) {
            return memo[i];
        }
        else { // 계산하지 않았다면 계산
            long value = Get(i - 2) + Get(i - 1);
            memo[i] = value;
            return value;
        }
    }
}

class Memorize {
    static void Main(string[] args) {
        // 메모화
        Console.WriteLine(Fibonacci.Get(40));
        Console.WriteLine(Fibonacci.Get(100));
    }
}
