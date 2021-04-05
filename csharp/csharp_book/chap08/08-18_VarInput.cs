using System;

// 입력 값을 var로 선언한 변수로 입력 받기
var str = Console.ReadLine();  // 문자열 입력
var chr = Convert.ToChar(Console.Read());  // 문자 하나 입력 받기

// 입력받은 값과 형식 출력
Console.WriteLine($"{str}: {str.GetType()}, {chr}: {chr.GetType()}");
