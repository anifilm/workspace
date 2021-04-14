using System;
using System.Collections.Generic;

// 데이터를 선별하는 정형화된 코드
List<int> input = new List<int>() {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
List<int> output = new List<int>();

foreach (var item in input) {
    if (item % 2 == 0) {
        output.Add(item); // 출력을 나타내는 리스트에 요소 추가
    }
}

// 출력을 나타내는 배열을 반환
return output;
