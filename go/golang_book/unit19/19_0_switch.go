// switch 분기문 사용하기 1
package main

import "fmt"

func main() {
    i := 3

    switch i { // 값을 판단할 변수 설정
    case 0: // 각 조건에 일치하는 코드를 실행한다.
        fmt.Println(0)
    case 1:
        fmt.Println(1)
    case 2:
        fmt.Println(2)
    case 3: // 3과 변수의 값이 일치하므로
        fmt.Println(3) // 이 코드를 실행하고 이후 실행을 중단
    case 4:
        fmt.Println(4)
    default: // 모든 case에 해당하지 않을 때 실행
        fmt.Println(-1)
    }
}

/*
다양한 조건을 if, else if 조건문으로 나열하는 것보다 switch 분기문을 사용하면 좀 더 간단하게 조건을 표현할 수 있다.

switch 변수 {
case 값1:
    // 값1일 때 실행할 코드를 작성
case 값2:
    // 값2일 때 실행할 코드를 작성
default:
    // 모든 case에 해당하지 않을 대 실행할 코드를 작성
}

Go언어의 switch 분기문은 C, C++와는 달리 case에서 break 키워드를 생략한다.
*/
