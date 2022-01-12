// 함수 Defer 1
package main

import "fmt"

func ex_f1() {
    fmt.Println("f1: start")
    defer ex_f2() // 마지막에 호출
    fmt.Println("f1: end")
}

func ex_f2() {
    fmt.Println("f2: called")
}

func main() {
    // Defer 함수 실행 (지연)
    // Defer를 호출한 함수가 종료되기 직전에 호출 된다.
    // 타 언어의 Finally 구문과 비슷
    // 주로 리소스 반환, 열린파일 닫기, Mutax 잠금해제 등에 사용

    ex_f1()
}
