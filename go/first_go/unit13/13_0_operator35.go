// 연산자 알아보기 35
package main

import "fmt"

func main() {
    // || OR 논리 연산
    // 두 불 값 중 한 개라도 참인지 확인한다.
    fmt.Println(true || true)   // true: 두 값이 모두 true이므로 true
    fmt.Println(true || false)  // true: 두 값 중 하나가 true이므로 true
    fmt.Println(false || false) // false: 두 값이 모두 false이므로 false
}
