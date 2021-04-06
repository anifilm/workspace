using System;

// 문자열을 묶는 여러 가지 방법
string message = "String Interpolation";

Console.WriteLine("Message: {0}", message);  // WriteLine() 메서드 기본 제공
Console.WriteLine("Message: " + message);  // 더하기 연산자 사용
Console.WriteLine($"Message: {message}");  // 템플릿 문자열 사용
