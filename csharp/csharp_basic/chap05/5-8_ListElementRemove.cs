using System;
using System.Collections.Generic;

// 리스트 요소 제거
List<int> list = new List<int>() { 52, 273, 32, 64 };

list.Remove(52);

foreach (var item in list) {
    Console.WriteLine("Count: " + list.Count + "\titem: " + item);
}
