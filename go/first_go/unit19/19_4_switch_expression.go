// 조건식으로 분기하기 1
package main

import "fmt"

func main() {
    i := 7

    switch { // case에 조건식을 지정했으므로 판단할 변수는 생략
    case i >= 5 && i < 10: // i가 5보다 크거나 같으면서 10보다 작을 때
        fmt.Println("5 이상, 10 미만")
    case i >= 0 && i < 5: // i가 0보다 크거나 5보다 작을 때
        fmt.Println("0 이상, 5 미만")
    }
}

/*
switch 키워드 다음에 판별할 변수를 지정하지 않고 case에서 조건식만으로 문장을 실행할 수도 있다. C, C++에서는 case에서 숫자나 열거형 값만 사용할 수 있었지만 Go언어에서는 조건식도 사용할 수 있다.
*/
