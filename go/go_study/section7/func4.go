// 함수 기초 4
package main

import "fmt"

func multiply(x int, y int) (r1 int, r2 int) {
    r1 = x * 10
    r2 = y * 15
    return
}

func multiply2(x int, y int) (int, int) {
    return x * 10, y * 15
}

func main() {
    // 함수: 다중 값 반환 (return values)

    // 예제 1
    a, b := multiply(10, 5)
    fmt.Println("ex1:", a, b)

    // 예제 2
    c, d := multiply2(10, 5)
    fmt.Println("ex2:", c, d)
}
