// 연산자 알아보기 11
package main

import "fmt"

func main() {
    // /= 나눗셈 후 대입
    // 현재 변수와 값을 나눈 다음 다시 변수에 대입한다.
    a := 5         // 5
    a /= 2         // 2: a에 2를 나눈 후 대입
    fmt.Println(a) // 2
}
