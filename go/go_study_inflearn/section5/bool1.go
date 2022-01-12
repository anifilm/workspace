// 데이터 타입: Bool 1
package main

import "fmt"

func main() {
    // Bool
    // 조건부 논리 연산자랑 주로 사용:  ! (not), || (or), && (and)
    // 암묵적 형변환 안됨: 0, nil -> false 변환하지 않음

    // 예제
    var b1 bool = true
    var b2 bool = false

    b3 := true

    fmt.Println("ex1:", b1)       // true
    fmt.Println("ex2:", b2)       // false
    fmt.Println("ex3:", b3)       // true
    fmt.Println("ex4:", b3 == b3) // true
    fmt.Println("ex5:", b1 && b3) // true
    fmt.Println("ex6:", b1 || b2) // true
    fmt.Println("ex7:", !b2)      // true

    /*
       // 예외 발생, 1 <- true 로 취급하지 않는다
       b4 := 1
       if b4 {
           fmt.Println("ex8: true")
       }
    */
}
