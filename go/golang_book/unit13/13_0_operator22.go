// 연산자 알아보기 22
package main

import "fmt"

func main() {
    // >> 비트를 오른쪽으로 이동
    // 현재 값의 비트를 특정 횟수만큼 오른쪽으로 이동. 사용할 수 있는 자료형은 정수
    a := 112              // 0111 0000
    b := a >> 3           // 0000 1110: a의 비트를 오른쪽으로 3번 이동
    fmt.Printf("%08b", b) // 0000 1110
}
