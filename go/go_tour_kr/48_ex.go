// 심화 연습: 복소수 세제곱근
package main

import "fmt"

func Cbrt(x complex128) complex128 {
    z = z - (z*z*z-x)/(3*z*z)
}

func main() {
    fmt.Println(Cbrt(2))
}
