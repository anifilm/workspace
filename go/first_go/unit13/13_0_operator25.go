// 연산자 알아보기 25
package main

import "fmt"

func main() {
    // ^ 비트 반전(단항)
    // 비트를 반전시킨다.(Bitwise complement, 1의 보수) 즉 0은 1로 1은 0으로 바꾼다.
    var a uint8 = 3       // 0000 0011
    b := ^a               // 1111 1100: a의 비트를 반전시킴
    fmt.Printf("%08b", b) // 1111 1100
}
