// 함수 Defer 2
package main

import "fmt"

func sayHello(msg string) {
    defer func() {
        fmt.Println(msg)
    }()

    func() {
        fmt.Print("Hi ")
    }()
}

func main() {
    // Defer 함수 실행 (지연)
    // Defer를 호출한 함수가 종료되기 직전에 호출 된다.
    // 타 언어의 Finally 구문과 비슷
    // 주로 리소스 반환, 열린파일 닫기, Mutax 잠금해제 등에 사용

    sayHello("Golang!")
}
