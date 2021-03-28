using System;

// while 반복문 이용
int i = 0;
int[] intArray = {52, 273, 32, 65, 103};

while (i < intArray.Length) {
    Console.WriteLine(i + "번째 출력: " + intArray[i]);
    i++;
}
