// 데이터 타입: Bool 2
package main

import "fmt"

func main() {
    // Bool
    // 조건부 논리 연산자랑 주로 사용:  ! (not), || (or), && (and)
    // 암묵적 형변환 안됨: 0, nil -> false 변환하지 않음

    // 예제 1 (논리연산자)
    fmt.Println("ex1-1:", true && true)   // true
    fmt.Println("ex1-2:", true && false)  // false
    fmt.Println("ex1-3:", false && false) // false
    fmt.Println("ex1-4:", true || true)   // true
    fmt.Println("ex1-5:", true || false)  // true
    fmt.Println("ex1-6:", false || false) // false
    fmt.Println("ex1-7:", !true)          // false
    fmt.Println("ex1-8:", !false)         // true
    fmt.Println()

    // 예제 2 (비교연산자)
    num1 := 15
    num2 := 37

    fmt.Println("ex2-1:", num1 < num2)  // true
    fmt.Println("ex2-2:", num1 > num2)  // false
    fmt.Println("ex2-3:", num1 >= num2) // false
    fmt.Println("ex2-4:", num1 != num2) // true
    fmt.Println("ex2-5:", num1 <= num2) // true
}
