// 데이터 타입: Numeric 3
package main

import "fmt"

func main() {
    // 테이터 타입: 숫자형
    // 실수 (부동소수점)
    // flaot32 (7자리), flaot64 (15자리)

    // 예제
    var num1 float32 = 0.14
    var num2 float32 = .75647
    var num3 float32 = 442.0378373
    var num4 float32 = 10.0

    // 지수 표기법
    var num5 float32 = 14e6
    var num6 float64 = .156875E+3
    var num7 float64 = 5.32521e-10

    fmt.Println("ex1:", num1)
    fmt.Println("ex2:", num2)
    fmt.Println("ex3:", num3)
    fmt.Println("ex4-1:", num4-0.1)          // 주의
    fmt.Println("ex4-2:", float32(num4-0.1)) // 주의
    fmt.Println("ex4-3:", float64(num4-0.1)) // 주의, 부동소수점 연산 오류
    fmt.Println("ex5:", num5)
    fmt.Println("ex6:", num6)
    fmt.Println("ex7:", num7)
}
