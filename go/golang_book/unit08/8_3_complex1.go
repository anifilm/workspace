// 복소수 1
package main

import "fmt"

func main() {
    var num1 complex64 = 1 + 2i                    // 실수부 1, 허수부 2i
    var num2 complex64 = 4.2342 + 2.3527i          // 실수부 고정소수점 4.2343, 허수부 고정소수점 2.3527i
    var num3 complex64 = 1.e+3i                    // 실수부 부동소수점 1.e, 허수부 3i
    var num4 complex64 = 7.2715e-10i               // 실수부 없음, 허수부 부동소수점 7.27151e-10i
    var num5 complex128 = 1 + 2i                   // 실수부 1, 허수부 2i
    var num6 complex128 = 5.32521e-10 + .12345E+2i // 실수부 부동소수점 5.32531e-10, 허수부 부동소수점 .12345E+2i

    fmt.Println(num1, num2, num3)
    fmt.Println(num4, num5, num6)

    var r1 float32 = real(num1) // num1의 실수부1
    var i1 float32 = imag(num1) // num1의 허수부2

    var r2 float64 = real(num5) // num5의 실수부1
    var i2 float64 = imag(num5) // num5의 허수부2

    fmt.Println(r1, i1)
    fmt.Println(r2, i2)
}
