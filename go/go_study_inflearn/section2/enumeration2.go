// 열거형 2
package main

import "fmt"

func main() {
    // 열거형
    // 상수를 사용하는 일정한 규칙에 따라 숫자를 증가시키는 묶음
    const (
        A = iota
        B
        C
    )

    const (
        Jan = iota + 1 // 계산식 가능
        Feb
        Mar
        Apr
        May
        Jun
    )

    fmt.Println("A:", A)
    fmt.Println("B:", B)
    fmt.Println("C:", C)

    fmt.Println("Jan:", Jan)
    fmt.Println("Feb:", Feb)
    fmt.Println("Mar:", Mar)
    fmt.Println("Apr:", Apr)
    fmt.Println("May:", May)
    fmt.Println("Jun:", Jun)
}
