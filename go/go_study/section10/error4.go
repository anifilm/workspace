// Go 에러처리 기초 4
package main

import (
    "errors"
    "fmt"
    "log"
)

func notZero(n int) (string, error) { // 메서드 리턴값 error 타입 중요!
    if n != 0 {
        s := fmt.Sprint("Hello Golang: ", n)
        return s, nil
    }

    return "", errors.New("0 을 입력했습니다. 에러 발생!") // 리턴값으로 errors.New 사용
}

func main() {
    // 에러 처리
    // errors.New 패키지를 통한 에러 출력

    a, err := notZero(1)
    if err != nil {
        // log.Fatal(err)
        log.Fatal(err.Error())
    }

    fmt.Println("ex1:", a)

    b, err := notZero(0) // 0 넣고 테스트
    if err != nil {
        // log.Fatal(err)
        log.Fatal(err.Error())
    }

    // Fatal 이후 프로그램 종료후 실행 중지
    fmt.Println("ex2:", b)
    fmt.Println("End Error Handing!")
}
