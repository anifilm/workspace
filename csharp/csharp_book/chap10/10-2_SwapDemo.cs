using System;

// 변수 값 서로 바꾸기
var i = 100;
var j = 200;

Console.WriteLine($"처음: {i}, {j}");

var tmp = i;
i = j;
j = tmp;

Console.WriteLine($"변경: {i}, {j}");
