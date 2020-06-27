// 데이터 타입: Numeric 4
package main

import "fmt"

func main() {
    // 테이터 타입: 숫자형
    // 복소수형 (complex number)
    // complex64 (32bit 실수 + 허수)
    // complex128 (64vit 실수 + 허수)

    // 예제 1
    var num1 complex64 = 5 + 7i
    num2 := 8 + 1i
    num3 := complex(3, 2) // complex128
    var num4 complex128 = 9 + 3i
    num5 := complex64(2 + 3i)

    fmt.Println("ex1-1:", num1)
    fmt.Println("ex1-2:", num2)
    fmt.Println("ex1-3:", num3)
    fmt.Println("ex1-4:", num4)
    fmt.Println("ex1-5:", num5)

    // 예제 2
    // real(): 실수부 출력
    // imag(): 허수부 출력
    fmt.Println("ex2-1:", num1, real(num1), imag(num1))
    fmt.Println("ex2-2:", num2, real(num2), imag(num2))
    fmt.Println("ex2-3:", num3, real(num3), imag(num3))
    fmt.Println("ex2-4:", num4, real(num4), imag(num4))
    fmt.Println("ex2-5:", num5, real(num5), imag(num5))
}
