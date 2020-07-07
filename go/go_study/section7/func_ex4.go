// 함수 심화 4
package main

import "fmt"

func main() {
    // 함수 고급
    // 익명 함수 (Anonymous Function)

    // 예제 1
    func() {
        fmt.Println("ex1: Anonymous func!")
    }()

    fmt.Println()

    // 예제 2
    msg := "Hello Golang!"

    func(m string) {
        fmt.Println("ex2:", m)
    }(msg)

    fmt.Println()

    // 예제 3
    func(x, y int) {
        fmt.Println("ex3:", x+y)
    }(10, 20)

    fmt.Println()

    // 예제 4
    r := func(x, y int) int {
        return x * y
    }(5, 10)

    fmt.Println("ex4:", r)
}
