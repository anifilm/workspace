// 함수 심화 1
package main

import "fmt"

func multiply(n ...int) int {
    total := 1
    for _, value := range n {
        total *= value
    }

    return total
}

func sum(n ...int) int {
    total := 0
    for _, value := range n {
        total += value
    }

    return total
}

func prtWord(msg ...string) {
    for i, value := range msg {
        fmt.Printf("ex2-%d: %s\n", i+1, value)
    }
}

func main() {
    // 함수 고급
    // 가변 인자 실습 (매개 변수 개수가 동적으로 변할 때 - 정해져 있지 않음)

    // 예제 1
    x := multiply(5, 6, 7, 8, 9, 10)
    y := sum(5, 6, 7, 8, 9, 10)
    fmt.Println("ex1-1:", x)
    fmt.Println("ex1-2:", y)
    fmt.Println()

    // 예제 2
    prtWord("a", "apple", "test", "seoul", "golang", "hi")
    fmt.Println()

    // 예제 3
    a := []int{5, 6, 7, 8, 9, 10}

    m := multiply(a...)
    n := sum(a...)

    fmt.Println("ex3-1:", m)
    fmt.Println("ex3-2:", n)
}
