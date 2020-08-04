// Go 에러처리 기초 1
package main

import (
    "fmt"
    "log"
    "os"
)

func main() {
    // 에러 처리
    // 에러 처리는 소프트웨어의 품질 향상에서 가장 중요한 부분! -> 유형코드 및 에러 정보를 남기는 것
    // Go 에서는 기본적으로 error 패키지에서 error 인터페이스를 제공
    // type error interface { Error() string }
    // 즉, Error 메서드를 구현하면 사용자 정의 에러 처리 제작 가능
    // 기본적으로 메서드 마다 리턴 타입 2개 (리턴값, 에러)
    // 1. Errorf (에러타입 리턴) 메서드를 통한 에러 출력
    // 2. Fatal (프로그램 종료) 메서드를 통한 에러 출력

    // 기본적인 메서드 에러 처리 예제
    f, err := os.Open("unnamedfile") // error
    if err != nil {
        log.Fatal(err.Error()) // 방법 1
        // log.Fatal(err)      // 방법 2
    }

    fmt.Println("=============")
    fmt.Println("ex:", f.Name())
}
