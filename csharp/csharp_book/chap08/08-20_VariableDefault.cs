using System;

// 변수의 기본값을 Default로 설정하기
int intVal = default;  // 0
double doubleVal = default;  // 0
char chr = default;    // '\0'
string str = default;  // null

Console.WriteLine($"[{intVal}], [{doubleVal}], [{chr}], [{str}]");
Console.WriteLine($"[{intVal}], [{doubleVal}], [{chr == Char.MinValue}], [{str == null}]");
