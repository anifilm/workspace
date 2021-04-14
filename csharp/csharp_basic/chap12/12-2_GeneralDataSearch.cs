using System;
using System.Collections.Generic;
using System.Linq;

// Linq를 사용해 간단하게 작성
List<int> input = new List<int>() {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Linq 질의를 사용해 반환
return from item in input
       where item % 2 == 0
       select item;
