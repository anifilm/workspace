using System;

// 4-3: 기본적은 배열 생성 방법
int[] intArray = {52, 273, 32, 65, 103};
long[] longArray = {52, 273, 32, 65, 103};
float[] floatArray = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
double[] doubleArray = {1.0, 2.0, 3.0, 4.0, 5.0};
char[] charArray = {'가', '나', '다', '라'};
string[] stringArray = {"임채영", "정흥규", "서환길"};

// 4-5: 배열의 Length 속성
int[] intArray = {52, 273, 32, 65, 103};

Console.WriteLine(intArray.Length); // 배열의 길이를 출력

// 4-7: 원하는 크기의 배열 생성
int[] array = new int[100]; // 길이가 100인 배열 생성
