// 연산자 알아보기 9
package main

import "fmt"

func main() {
    // -= 뺄셈 후 대입
    // 현재 변수에서 값을 뺀 다음 다시 변수에 대입한다.
    a := 5         // 5
    a -= 2         // 3: a에 2를 뺀 후 대입
    fmt.Println(a) // 3
}
