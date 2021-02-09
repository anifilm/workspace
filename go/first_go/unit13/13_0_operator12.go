// 연산자 알아보기 12
package main

import "fmt"

func main() {
    // %= 나머지를 구한 후 대입
    // 현재 변수와 값의 나머지를 구한 다음 다시 변수에 대입한다.
    a := 5         // 5
    a %= 2         // 1: a에 2를 나눈 후 나머지를 대입
    fmt.Println(a) // 1
}
