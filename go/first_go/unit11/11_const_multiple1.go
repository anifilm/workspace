// 상수 사용하기 3
package main

import "fmt"

func main() {
    // const 상수명1, 상수명2 자료형 = 초기값1, 초기값2
    const x, y int = 30, 50       // x = 30, y = 50
    const age, name = 10, "Maria" // age = 10, name = "Maria"

    fmt.Println(x, y)
    fmt.Println(age, name)
}
