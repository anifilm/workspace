// 슬라이스 복사하기 2
package main

import "fmt"

func main() {
    a := []int{1, 2, 3}
    b := make([]int, 3)

    copy(b, a) // 슬라이스를 복사하였으므로 b[0]을 수정하더라도 a[0]은 변경되지 않는다.
    b[0] = 9

    fmt.Println(a) // [1 2 3]
    fmt.Println(b) // [9 2 3]

    // 슬라이스 변수의 첫 번째 요소의 주소값 출력
    fmt.Printf("%p\n", &a[0])
    fmt.Printf("%p\n", &b[0]) // 다르다.
}
