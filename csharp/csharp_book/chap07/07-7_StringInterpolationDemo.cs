using System;

// String Interpolation(문자열 보간법)
string name = "C#";
string version = "8.0";

Console.WriteLine("{0} {1}", name, version);  // WriteLine() 메서드의 기본 제공 기능 사용

string result = String.Format("{0}, {1}", name, version);  // String.Format() 메서드 사용
Console.WriteLine(result);

Console.WriteLine($"{name} {version}");  // 템플릿 문자열 사용

//$"{name} {version}" // C# Interactive에서는 Console.WriteLine() 생략 가능
