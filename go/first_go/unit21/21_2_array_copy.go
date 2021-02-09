// 배열 복사하기
package main

import "fmt"

func main() {
    a := [5]int{1, 2, 3, 4, 5}

    b := a // 배열을 대입하면 배열 전체가 복사됨, deep copy

    fmt.Println(a) // [1, 2, 3, 4, 5]
    fmt.Println(b) // [1, 2, 3, 4, 5]

    b[1] = 20
    b[2] = 30
    b[3] = 40

    fmt.Println(a) // [1, 2, 3, 4, 5]
    fmt.Println(b) // [1, 20, 30, 40, 5]
}

/*
Go언어의 배열 벼수는 배열 전체를 뜻하면 첫 번째 요소의 포인터가 아니다. 따라서 위와 같이 배열을 다른 변수에
대입하면 배열 전체가 복사된다.
*/
