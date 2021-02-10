// 레퍼런스 타입 1
package main

import "fmt"

func main() {
    a := [3]int{1, 2, 3} // 길이가 3인 배열 선언 및 초기화
    var b [3]int         // 길이가 3인 배열 변수 선언

    b = a    // 배열의 요소가 모두 복사됨
    b[0] = 9 // b[0]에 9를 대입하면 b의 첫 번째 요소만 변경됨

    fmt.Println(a) // [1 2 3]
    fmt.Println(b) // [9 2 3]

    // 배열을 비교 (요소의 값이 같은지 비교한다.)
    fmt.Println(a == b)

    // 배열 변수의 첫 번째 요소의 주소값 출력
    fmt.Printf("%p\n", &a[0])
    fmt.Printf("%p\n", &b[0]) // 다르다.
}

/*
앞서 알아본 것과 같이 배열은 b = a와 같이 변수로 대입시 요소의 값이 모두 복사된다. deep copy
*/
