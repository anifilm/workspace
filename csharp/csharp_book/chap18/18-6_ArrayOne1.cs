using System;

// 1차원 배열을 선언/초기화하는 프로그램
int [] intArray = new int[3];

intArray[0] = 1;
intArray[1] = 2;
intArray[2] = 3;

// [1] for 문 사용 출력: 정확하게 배열의 범위를 알고 있을 때
for (int i = 0; i < 3; i++) {
    Console.WriteLine($"{i}번째 인덱스: {intArray[i]}");
}

// [2] foreach 문 사용 출력: intArray에 데이터가 있는 동안 반복
foreach (int intValue in intArray) {
    Console.WriteLine("{0}", intValue);
}
