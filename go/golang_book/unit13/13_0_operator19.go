// 연산자 알아보기 19
package main

import "fmt"

func main() {
    // ^= XOR 비트 연산 후 대입
    // 현재 변수를 값으로 XOR 연산한 다음 다시 변수에 대입한다.
    a := 3                // 0000 0011
    b := 2                // 0000 0010
    a ^= b                // 0000 0001: a와 b의 XOR 비트 연산 후 a에 대입
    fmt.Printf("%08b", a) // 0000 0001
}
