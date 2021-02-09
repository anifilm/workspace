// 연산자 알아보기 8
package main

import "fmt"

func main() {
    // += 덧셈 후 대입
    // 현재 변수와 값을 더한 다음 다시 변수에 대입한다. 문자열은 현재 변수에 문자열을 붙인 다음 다시 변수에 대입
    a := 5         // 5
    a += 2         // 7: a에 2를 더한 후 대입
    fmt.Println(a) // 7

    b := "Hello, " // Hello,
    b += "world!"  // Hello, world!: b에 world! 문자열을 붙인 후 대입
    fmt.Println(b) // Hello, world!
}
