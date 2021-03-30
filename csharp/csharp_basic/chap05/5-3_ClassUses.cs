using System;
using System.Collections.Generic;

// 5-3: 원하는 범위의 실수 난수 생성
Random random = new Random();
Console.WriteLine(random.NextDouble() * 10);
Console.WriteLine(random.NextDouble() * 10);
Console.WriteLine(random.NextDouble() * 10);
Console.WriteLine(random.NextDouble() * 10);
Console.WriteLine(random.NextDouble() * 10);

// 5-4: 배열 생성
int[] intArray = new int[10];
long[] longArray = new long[10];
string[] stringArray = new string[10];
