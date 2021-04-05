using System;

// 변수(Variable)
string name = "박용준";
name = "레드플러스";  // 변경 가능

// 상수(Constant)
const int AGE = 20;  // AGE는 20으로 고정
//AGE = 45;  // AGE를 45로 변경하려고 하면 에러 발생

// 변수와 상수 사용
Console.WriteLine($"{name} - {age}");

// 상수는 일반적으로 대문자로 선언함
const double PI = 3.14;
const string SITE_NAME = "닷넷코리아";

Console.WriteLine("{0}", PI);
Console.WriteLine("{0}", SITE_NAME);
