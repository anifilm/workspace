using System;

// 문자열을 숫자로 변환
Console.WriteLine(int.Parse("52") + "\t" + int.Parse("52").GetType());
Console.WriteLine(long.Parse("273") + "\t" + long.Parse("273").GetType());
Console.WriteLine(float.Parse("52.273") + "\t" + float.Parse("52.273").GetType());
Console.WriteLine(double.Parse("103.32") + "\t" + double.Parse("103.32").GetType());

/*
문자열을 숫자로 변환하는 메서드
int.Parse()     문자열 숫자를   int 자료형으로 변환
long.Parse()    문자열 숫자를  long 자료형으로 변환
float.Parse()   문자열 숫자를 float 자료형으로 변환
double.Parse()  문자열 숫자를 double 자료형으로 변환
*/
