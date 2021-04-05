using System;
using System.Text;

// default 키워드로 C# 형식의 기본값 가져오기
int intDefault = default(int);  // int 형식의 기본값
bool boolDefault = default(bool);  // bool 형식의 기본값
string strDefault = default(string);  // string 형식의 기본값
StringBuilder sbDefault = default(StringBuilder);  // StringBuilder 클래스의 기본값

Console.WriteLine(intDefault);  // 0
Console.WriteLine(boolDefault); // false
Console.WriteLine(strDefault);  // null
Console.WriteLine(sbDefault);   // null
Console.WriteLine(sbDefault == null); // true => True
