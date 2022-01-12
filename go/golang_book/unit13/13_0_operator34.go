// 연산자 알아보기 34
package main

import "fmt"

func main() {
    // && AND 논리 연산
    // 두 불 값이 모두 참인지 확인한다.
    fmt.Println(true && true)   // true: 두 값이 모두 true이므로 true
    fmt.Println(true && false)  // false: 두 값 중 하나가 false이므로 false
    fmt.Println(false && false) // false: 두 값이 모두 false이므로 false
}
