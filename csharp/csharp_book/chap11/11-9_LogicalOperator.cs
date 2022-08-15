using System;

var i = 3;
var j = 5;
var r = false;

r = (i == 3) && (j != 3);  // r = true && true => True
Console.WriteLine(r);

r = (i != 3) || (j == 3);  // r = false || false => False
Console.WriteLine(r);

r = (i >= 5);  // r => False
Console.WriteLine("{0}", !r);  // !false => True

Console.WriteLine(false && true);  // True
Console.WriteLine((1 == 1) || (1 != 1));  // True
Console.WriteLine(!(1 == 1));  // !true => False
