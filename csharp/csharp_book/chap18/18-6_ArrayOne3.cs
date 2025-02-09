using System;

// 1차원 배열 선언, 요소 생성, 초기화를 동시에...
// 요소수 생략 가능: 생략하면 뒤에서 지정한 요소의 수만큼 자동 생성
var intArray = new int[] { 1, 2, 3 };

// [1] for 문 사용 출력: 정확하게 배열의 범위를 알고 있을 때
for (int i = 0; i < 3; i++) {
    Console.WriteLine($"{i}번째 인덱스: {intArray[i]}");
}

// [2] foreach 문 사용 출력: intArray에 데이터가 있는 동안 반복
foreach (int intValue in intArray) {
    Console.WriteLine("{0}", intValue);
}
