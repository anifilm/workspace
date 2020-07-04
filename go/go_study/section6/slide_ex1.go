// 자료형: 슬라이스 심화 1
package main

import "fmt"

func main() {
    // 슬라이스 추가 및 병합

    // 예제 1
    s1 := []int{1, 2, 3, 4, 5}
    s2 := []int{8, 9, 10, 11, 12}
    s3 := []int{13, 14, 15, 16, 17}
    s4 := []int{18, 19, 20, 21, 22}
    s1 = append(s1, 6, 7)
    s2 = append(s2, s3...)      // 슬라이스를 삽입 할 경우 ... 사용
    s3 = append(s3, s4[0:3]...) // 추출 후 병합

    fmt.Println("ex1-1:", s1)
    fmt.Println("ex1-2:", s2)
    fmt.Println("ex1-3:", s3)
    fmt.Println()

    // 예제 2
    s5 := make([]int, 0, 5)
    for i := 0; i < 15; i++ {
        s5 = append(s5, i)
        fmt.Printf("ex2 -> len: %d, cap: %d, value: %v\n", len(s5), cap(s5), s5) // 길이 및 용량 자동 증가 (용량: 2배씩 증가함)
    }
}
