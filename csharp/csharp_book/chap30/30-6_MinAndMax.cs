using System;
using System.Linq;

class MinAndMax {
    static void Main() {
        int[] arr = { 1, 2, 3 };
        int min = arr.Min();  // 1
        int max = arr.Max();  // 3

        Console.WriteLine($"최솟값: {min}, 최댓값: {max}");
    }
}
