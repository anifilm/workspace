// 슬라이스와 용량
package main

import "fmt"

func main() {
    a := []int{1, 2, 3, 4, 5}
    fmt.Println(len(a), cap(a)) // 5 5: 길이가 5이며 용량이 5인 슬라이스

    a = append(a, 6, 7)         // 슬라이스 a에 값 6, 7을 추가
    fmt.Println(len(a), cap(a)) // 7 10: 길이가 7이며 용량이 10인 슬라이스, 용량이 늘어남

    a = append(a, 8, 9, 10, 11)
    fmt.Println(len(a), cap(a)) // 11 20: 동적으로 용량이 증가되는 경우 두배씩 증가된다.

    a = append(a, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21)
    fmt.Println(len(a), cap(a)) // 21 40: 용량 두배 증가 확인!
}
