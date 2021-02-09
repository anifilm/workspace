// 여러 조건을 함께 처리하기
package main

import "fmt"

func main() {
    i := 3

    switch i {
    case 2, 4, 6: // i가 2, 4, 6일 때
        fmt.Println("짝수")
    case 1, 3, 5: // i가 1, 3, 5일 때
        fmt.Println("홀수")
    }
}

/*
위와 같이 여러 조건을 같은 문장으로 처리하고 싶을 때는 case에서 ,(콤마)로 값을 구분해준다.
*/
