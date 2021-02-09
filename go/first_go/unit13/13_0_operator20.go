// 연산자 알아보기 20
package main

import "fmt"

func main() {
    // &^= AND NOT 비트 연산 후 대입
    // 현재 변수를 값으로 AND NOT 연산한 다음 다시 변수에 대입한다. 이 연산자는 특정 플래그를 끌 때 주로 사용
    a := 255              // 1111 1111
    b := 68               // 0100 0100
    a &^= b               // 1011 1011: a와 b의 AND NOT 비트 연산 후 a에 대입
    fmt.Printf("%08b", a) // 1011 1011
}
