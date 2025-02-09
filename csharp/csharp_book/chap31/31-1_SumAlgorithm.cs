using System;

// n명의 점수 중에서 80점 이상인 점수의 합계

/// <summary>
/// 합계 알고리즘(Sum Algorithm): 주어진 범위에 주어진 조건에 해당하는 자료들의 합계
/// </summary>
class SumAlgorithm {
    static void Main() {
        // [1] Input: n명의 점수
        int[] scores = { 100, 75, 50, 37, 90, 95 };
        int sum = 0;

        // [2] Process: 합계 알고리즘 영역: 주어진 범위에 주어진 조건(필터링)
        for (int i = 0; i < scores.Length; i++) {
            if (scores[i] >= 80) {
                sum += scores[i];
            }
        }

        // [3] Output
        Console.WriteLine($"{scores.Length}명의 점수 중 80점 이상의 총점 {sum}");
    }
}

// Statement -> Expression
// (new int[] { 100, 75, 50, 37, 90, 95 }).Where(s => s >= 80).Sum()  // 285
