// 패키지 접근 제어 1
package main

import (
    "fmt"

    "./lib2"
)

func main() {
    // 패키지 접근 제어
    // 변수, 상수, 함수, 메소드, 구조체 등 식별자
    // 대문자: 패키지 외부 접근 가능
    // 소문자: 패키지 외부 접근 불가 (패키지 내에서만 접근 가능)

    fmt.Println("100보다 큰 수?:", lib2.CheckNum1(101))
    fmt.Println("1000보다 큰수?:", lib2.checkNum2(1001)) // 예외 발생 (접근 불가)
}
