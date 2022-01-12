// 배열 순회하기 2
package main

import "fmt"

func main() {
    a := [5]int{32, 29, 78, 16, 81}

    for i, value := range a { // i에는 인덱스, value에는 배열 요소의 값이 들어감
        fmt.Println(i, value)
    }
}

/*
배열의 길이를 구하지 않고 좀 더 간단하게 배열의 요소를 가져오려면 for 반복문에서 range 키워드를 사용한다.

for 인덱스, 값 := range 배열 {}

range 키워드를 사용하면 반복문이 실행될 때마다 배열의 인덱스와 해당 인덱스의 값이 자동으로 변수에 들어간다.
*/
