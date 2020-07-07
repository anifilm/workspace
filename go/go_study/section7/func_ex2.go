// 함수 심화 2
package main

import "fmt"

func multiply(x, y int) (r int) {
    r = x * y
    return
}

func sum(x, y int) (r int) {
    r = x + y
    return
}

func main() {
    // 함수 고급
    // 함수를 변수에 할당

    // 예제 1 (슬라이스에 할당)
    f := []func(int, int) int{multiply, sum} // f = {multiply(int, int), sum(int, int)}

    a := f[0](10, 15) // a = multiply(10, 15)
    b := f[1](5, 10)  // b = sum(5, 10)

    fmt.Println("ex1-1:", a, f[0](10, 15)) // f = multiply(10, 15)
    fmt.Println("ex1-2:", b, f[1](5, 10))  // f = sum(5, 10)
    fmt.Println()

    // 예제 2 (변수에 할당)
    var f1 func(int, int) int = multiply
    f2 := sum

    fmt.Println("ex2-1:", f1(10, 15)) // f1 = multiply(10, 15)
    fmt.Println("ex2-2:", f2(5, 10))  // f2 = sum(5, 10)
    fmt.Println()

    // 예제 3 (맵에 할당)
    m := map[string]func(int, int) int{
        "multiply": multiply,
        "sum":      sum,
    }

    fmt.Println("ex3-1:", m["multiply"](10, 15))
    fmt.Println("ex3-2:", m["sum"](5, 10))
}
