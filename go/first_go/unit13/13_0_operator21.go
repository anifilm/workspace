// 연산자 알아보기 21
package main

import "fmt"

func main() {
    // << 비트를 왼쪽으로 이동
    // 현재 값의 비트를 특정 횟수만큼 왼쪽으로 이동. 사용할 수 있는 자료형은 정수
    a := 7                // 0000 0111
    b := a << 2           // 0001 1100: a의 비트를 오른쪽으로 2번 이동
    fmt.Printf("%08b", b) // 0001 1100
}