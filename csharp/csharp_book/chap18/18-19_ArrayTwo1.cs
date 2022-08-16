using System;

// 2차원 배열 생성 및 반복문으로 사용하기
int[,] intArray = new int[2, 3];

intArray[0, 0] = 1;
intArray[0, 1] = 2;
intArray[0, 2] = 3;
intArray[1, 0] = 4;
intArray[1, 1] = 5;
intArray[1, 2] = 6;

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        Console.Write($"{intArray[i, j]}_");
    }
    Console.Write('\n');  // 행 출력 후 개행
}
