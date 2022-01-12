// 연산자 알아보기 13
package main

import "fmt"

func main() {
    // & AND 비트 연산
    // 두 값을 비트 단위로 AND 연산을 한다. 사용할 수 있는 자료형은 정수
    a := 3                // 0000 0011
    b := 2                // 0000 0010
    c := a & b            // 0000 0010: a와 b의 AND 비트 연산
    fmt.Printf("%08b", c) // 0000 0010
}
