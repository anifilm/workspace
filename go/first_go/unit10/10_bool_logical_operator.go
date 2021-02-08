// 불 사용하기 2
package main

import "fmt"

func main() {
    // AND(&&), OR(||), NOT(!) 논리 연산자
    fmt.Println(true && true)   // true
    fmt.Println(true && false)  // false
    fmt.Println(false && false) // false
    fmt.Println(true || true)   // true
    fmt.Println(true || false)  // true
    fmt.Println(false || false) // false
    fmt.Println(!true)          // false
    fmt.Println(!false)         // true
}
