using System;
using System.Collections.Generic;
using System.Linq;

// from in select를 사용한 Linq
List<int> input = new List<int>() {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

var output = from item in input
             select item * item;

foreach (var item in output) {
    Console.WriteLine(item);
}
