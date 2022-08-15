using System;

// 논리 부정 연산자: !
var bln = false;

Console.WriteLine(!bln);  // True
Console.WriteLine(!!bln); // False
Console.WriteLine(!(!(!bln))); // True
