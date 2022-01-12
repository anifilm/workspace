// 연산자 알아보기 37
package main

import "fmt"

func main() {
    // & 참조(레퍼런스) 연산
    // 현재 변수의 메모리 주소를 구한다.
    a := 1
    b := &a        // a의 메모리 주소를 b에 대입
    fmt.Println(b) // 0xc0820062d0 (메모리 주소)
}
