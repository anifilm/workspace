// 데이터 타입: 문자열 연산 3
package main

import (
    "fmt"
    "strings"
)

func main() {
    // 문자열 조합은 한번 생성후 수정불가 이유로 새로 계속해서 생성된다.
    // 효율적 사용을 위해서 되도록 Join() 함수 사용을 추천

    // 예제 1 (결합: 일반 연산)
    str1 := "Go is expressive, concise, clean, and efficient. Its concurrency mechanisms make it easy to " +
        "write programs that get the most out of multicore and networked machines, while its novel " +
        "type system enables flexible and modular program construction. Go compiles quickly to machine " +
        "code yet has the convenience of garbage collection and the power of run-time reflection."
    str2 := "It's a fast, statically typed, compiled language that feels like a dynamically typed, interpreted language."

    fmt.Println("ex1:", str1+" "+str2)

    // 예제 2 (결합: Join())
    strSet := []string{} // 슬라이스 선언
    strSet = append(strSet, str1)
    strSet = append(strSet, str2)
    fmt.Println("ex2:", strings.Join(strSet, " "))
}
