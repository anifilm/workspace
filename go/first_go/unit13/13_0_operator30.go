// 연산자 알아보기 30
package main

import "fmt"

func main() {
    // < 작다
    // 앞의 값이 작은지 비교한다. 문자열은 ASCII 코드 값을 기준으로 판단한다. 또한, 첫 글자가 같다면 그 다음 글자부터 차례대로 비교하여 최종 값을 구한다.
    fmt.Println(1 < 2)             // true: 1이 2보다 작으므로 true
    fmt.Println(3.5 < 5.5)         // true: 3.5가 5.5보다 작으므로 true
    fmt.Println("Hello" < "world") // true: H가 w보다 ASCII 코드 값이 작으므로 true
}
