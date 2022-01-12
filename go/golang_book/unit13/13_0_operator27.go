// 연산자 알아보기 27
package main

import "fmt"

func main() {
    // - 음수 부호(단항)
    // 값에 음수 부호를 붙인다.
    a := 3
    b := -2
    c := -a        // a에 음수 부호를 붙임
    d := -b        // b에 음수 부호를 붙임
    fmt.Println(c) // -3: -(3)
    fmt.Println(d) // 2: -(-2)
}
