// 연산자 알아보기 15
package main

import "fmt"

func main() {
    // ^ XOR 비트 연산(다항)
    // 두 값을 비트 단위로 XOR 연산을 한다. 사용할 수 있는 자료형은 정수
    a := 3                // 0000 0011
    b := 2                // 0000 0010
    c := a ^ b            // 0000 0001: a와 b의 XOR 비트 연산
    fmt.Printf("%08b", c) // 0000 0001
}
