// 연산자 알아보기 33
package main

import "fmt"

func main() {
    // >= 크거나 같다
    // 앞의 값이 크거나 같은지 비교한다.
    fmt.Println(2 >= 2)             // true: 2이 2보다 크거나 같으므로 true
    fmt.Println(5.5 >= 3.5)         // true: 5.5가 3.5보다 크거나 같으므로 true
    fmt.Println("world" >= "Hello") // true: w가 H보다 ASCII 코드 값이 크거나 같으므로 true
}
