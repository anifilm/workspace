using System;
using System.Collections.Generic;
using System.Linq;

// Linq 기본 구문
List<int> input = new List<int>() {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

var output = from item in input
             where item % 2 == 0
             orderby item
             select item;
