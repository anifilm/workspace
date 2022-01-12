// goto 사용하기
package main

import "fmt"

func main() {
    var a int = 1

    if a == 1 {
        fmt.Println("Error 1") // 에러 1 상황
        return
    }

    if a == 2 {
        fmt.Println("Error 2") // 에러 2 상황
        return
    }

    if a == 3 {
        fmt.Println("Error 1") // 에러 1 상황, 중복 코드
        return
    }

    fmt.Println(a)
    fmt.Println("Success") // 정상 실행

    return
}

/*
먼저 위와 같이 여러 에러 상황이 있을 때 if 조건문으로 에러 처리를 해주면 중복되는 코드가 생긴다.
*/
