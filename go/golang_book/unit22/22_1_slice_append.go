// 슬라이스에 값 추가하기
package main

import "fmt"

func main() {
    a := []int{1, 2, 3}

    // append(슬라이스, 값1, 값2, 값3)
    a = append(a, 4, 5, 6)

    fmt.Println(a) // [1 2 3 4 5 6]
}

/*
append 함수를 사용하면 슬라이스의 맨 뒤에 값을 추가할 수 있다.
*/
