using System;

// 2차원 배열을 2중 for문으로 반복해서 출력하기
int[,] arr = new int[2, 3] { { 1, 2, 3 }, { 4, 5, 6 } };

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        Console.WriteLine($"arr[{i}, {j}] = {arr[i, j]}");
    }
}
