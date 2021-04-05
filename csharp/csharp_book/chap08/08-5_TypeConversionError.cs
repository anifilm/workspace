using System;

// long을 int로 명시적 형 변환
long longVal = long.MaxValue;
Console.WriteLine($"longVal의 값: {longVal}");  // 9223372036854775807

int intVal = (int)longVal;
Console.WriteLine($"intVal의 값: {intVal}");  // -1
