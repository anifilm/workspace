// 연산자 알아보기 24
package main

import "fmt"

func main() {
    // >> 비트를 오른쪽으로 이동 후 대입
    // 현재 값의 비트를 특정 횟수만큼 오른쪽으로 이동한 다음 다시 변수에 대입
    a := 112              // 0111 0000
    a >>= 3               // 0000 1110: a의 비트를 오른쪽으로 3번 이동한 후 a에 대입
    fmt.Printf("%08b", a) // 0000 1110
}