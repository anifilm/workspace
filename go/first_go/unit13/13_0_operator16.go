// 연산자 알아보기 16
package main

import "fmt"

func main() {
    // &^ AND NOT 비트 연산
    // 두 값을 비트 단위로 AND NOT 연산을 한다. 즉 다음과 같이 특정 비트를 끈다(Bit clear). 사용할 수 있는 자료형은 정수
    a := 255              // 1111 1111
    b := 68               // 0100 0100
    c := a &^ b           // 1011 1011: a와 b의 AND NOT 비트 연산
    fmt.Printf("%08b", c) // 1011 1011
}
