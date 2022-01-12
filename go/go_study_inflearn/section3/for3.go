// for 3
package main

import "fmt"

func main() {
    // 예제 1
    sum, i := 0, 0

    for {
        if i > 100 {
            break
        }
        sum += i
        i++
    }
    fmt.Println("ex1:", sum)

    // 예제 2
Loop1:
    // fmt.Println("break Loop") // 에러발생 (Loop 레이블 밑에 소스코드)
    for i := 0; i < 5; i++ {
        for j := 0; j < 5; j++ {
            if i == 2 && j == 4 {
                break Loop1
            }
            fmt.Println("ex2:", i, j)
        }
    }

    // 예제 3
    for i := 0; i < 10; i++ {
        if i%2 == 0 {
            continue
        }
        fmt.Println("ex3:", i)
    }

    // 예제 4
Loop2:
    // fmt.Println("continue Loop") // 에러발생 (Loop 레이블 밑에 소스코드)
    for i := 0; i < 3; i++ {
        for j := 0; j < 3; j++ {
            if i == 1 && j == 2 {
                continue Loop2
            }
            fmt.Println("ex4:", i, j)
        }
    }
}
