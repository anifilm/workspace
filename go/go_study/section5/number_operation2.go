// 테이터 타입: Numeric 연산 2
package main

import "fmt"

func main() {
    // 숫자 연산 (산술, 비교)
    // 같은 타입끼리만 연산 가능
    // 다른 타입의 연산은 반드시 형변환 후 연산
    // 형변환 없을 경우 예외(에러) 발생
    // +, -, *, /, %, >>, <<, &, ^...

    // 예제 1
    var n1 uint16 = 125
    var n2 uint16 = 90

    fmt.Println("ex1-1:", n1+n2)
    fmt.Println("ex1-2:", n1-n2)
    fmt.Println("ex1-3:", n1*n2)
    fmt.Println("ex1-4:", n1/n2)
    fmt.Println("ex1-5:", n1%n2)
    fmt.Println("ex1-6:", n1<<2) // 0111 1101 << 2 -> 0001 1111 0100 (0x1F4, 500)
    fmt.Println("ex1-7:", n1>>2) // 0111 1101 >> 2 ->      0001 1111 (0x1F, 31)
    fmt.Println("ex1-8:", n1^n2)

    // 예제 2
    var n3 int = 12
    var n4 float32 = 8.2
    var n5 uint16 = 1024
    var n6 uint32 = 120000

    // fmt.Println("ex2-1:", n3+n4)       // 예외 발생 (컴파일 에러)
    fmt.Println("ex2-1:", float32(n3)+n4) // 형변환 후 계산
    fmt.Println("ex2-2:", n3+int(n4))     // 12 + 8       -> 소수 부분값 손실
    fmt.Println("ex2-3:", n5+uint16(n6))  // 1024 + 54464 -> 형변환에 의한 값 손실
}
