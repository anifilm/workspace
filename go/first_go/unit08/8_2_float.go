// 실수
package main

import "fmt"

func main() {
    // 고정소수점 방식 (소수점 사용)
    var num1 float32 = 0.1
    var num2 float32 = .35
    var num3 float32 = 132.73287

    // 부동소수점 방식 (지수 표기법)
    var num4 float32 = 1e7
    var num5 float64 = .12345E+2
    var num6 float64 = 5.32521e-10

    fmt.Println(num1, num2, num3)
    fmt.Println(num4, num5, num6)
}
