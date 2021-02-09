// 연산자 알아보기 31
package main

import "fmt"

func main() {
    // <= 작거나 같다
    // 앞의 값이 작거나 같은지 비교한다.
    fmt.Println(2 <= 2)             // true: 1이 2보다 작거나 같으므로 true
    fmt.Println(3.5 <= 5.5)         // true: 3.5가 5.5보다 작거나 같으므로 true
    fmt.Println("Hello" <= "world") // true: H가 w보다 ASCII 코드 값이 작거나 같으므로 true
}
