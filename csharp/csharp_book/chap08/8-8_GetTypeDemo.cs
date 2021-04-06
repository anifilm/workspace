using System;

// GetType() 메서드로 데이터 형식 확인
int intVal = 1234;
string str = "안녕하세요";
char chr = 'A';
double doubleVal = 3.14;
object obj = new object();  // 객체

Console.WriteLine(intVal.GetType());
Console.WriteLine(str.GetType());
Console.WriteLine(chr.GetType());
Console.WriteLine(doubleVal.GetType());
Console.WriteLine(obj.GetType());
