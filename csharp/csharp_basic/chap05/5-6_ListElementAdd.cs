using System;
using System.Collections.Generic;

// 5-5: List 클래스의 인스턴스 생성
List<int> list = new List<int>();

// 5-6: 리스트 요소 추가
List<int> list2 = new List<int>();

list2.Add(52);
list2.Add(273);
list2.Add(32);
list2.Add(64);

foreach (var item in list2) {
    Console.WriteLine("Count: " + list2.Count + "\titem: " + item);
}
Console.WriteLine();

// 5-7: List 인스턴스 생성과 동시에 요소 추가
List<int> list3 = new List<int>() { 52, 273, 32, 64 };

foreach (var item in list3) {
    Console.WriteLine("Count: " + list3.Count + "\titem: " + item);
}
