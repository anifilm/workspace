// fallthrough 사용하기
package main

import "fmt"

func main() {
    i := 3

    switch i { // 값을 판달할 변수 설정
    case 4: // 각 조건에 일치하는 코드를 실행
        fmt.Println("4 이상")
        fallthrough
    case 3: // 3과 변수의 값이 일치하므로
        fmt.Println("3 이상") // 이 코드를 실행
        fallthrough         // fallthrough를 사용했으므로 아래 case를 실행
    case 2:
        fmt.Println("2 이상") // 실행
        fallthrough
    case 1:
        fmt.Println("1 이상") // 실행
        fallthrough
    case 0:
        fmt.Println("0 이상") // 실행, 마지막 case에는 fallthrough를 사용할 수 없음
    }
}

/*
특정 case의 문장을 실행한 뒤 다음 case의 문장을 실행하고 싶을 때는 fallthrough 키워드를 사용한다.
마치 C, C++의 switch 분기문에서 break 키워드를 생략한 것처럼 동작한다. 단, 맨 마지막 case에는
fallthrough 키워드를 사용할 수 없다.
*/
