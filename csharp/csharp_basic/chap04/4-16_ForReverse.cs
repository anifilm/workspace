using System;

// 역 for 반복문
int[] intArray = {1, 2, 3, 4, 5, 6};

for (int i = intArray.Length - 1; i >= 0; i--) {
    Console.WriteLine(intArray[i]);
}
