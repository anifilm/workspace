using System;

// 나머지 연산자(Modular Operator): 나머지 값 구하기
int i = 5;
int j = 3;
int k = 0;
result = i % j;
Console.WriteLine(k);  // 몫: 1, 나머지: {2}

/*
정수 형식의 피연산자의 경우 a % b의 결과가 a - (a / b) * b에서 생성된 값이다.
다음 예와 같이 0이 아닌 나머지의 부호는 왼쪽 피연산자와 동일하다.
*/

Console.WriteLine(5 % 4);   //  1
Console.WriteLine(5 % -4);  //  1
Console.WriteLine(-5 % 4);  // -1
Console.WriteLine(-5 % -4); // -1
