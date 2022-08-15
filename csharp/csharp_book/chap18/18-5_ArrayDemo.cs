using System;

// 1차원 배열에 문자열 저장하기

// [1] 배열 선언, [2] 배열 요소 생성
string[] phones = new string[2];

// [3] 배열에 값 대입
phones[0] = "112";
phones[1] = "119";

// [4] 배열 값 사용
Console.WriteLine("{0}, {1}", phones[0], phones[1]);  // 112, 119
