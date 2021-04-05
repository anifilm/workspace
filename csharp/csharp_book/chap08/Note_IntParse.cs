using System;

// 튜플 리터럴
var tuple = (100, 200);
Console.WriteLine(tuple.Item1);
Console.WriteLine(tuple.Item2);

var (x, y) = (300, 400);
Console.WriteLine($"{x}, {y}");
