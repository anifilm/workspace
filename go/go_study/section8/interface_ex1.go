// 인터페이스 심화 1
package main

import "fmt"

type Dog struct {
    name   string
    weight int
}

type Cat struct {
    name   string
    weight int
}

func printContent(v interface{}) {
    fmt.Printf("Type: (%T) -> ", v) // 원본 타입
    fmt.Println("ex:", v)
}

func main() {
    // 인터페이스 활용 (빈 인터페이스)
    // 함수내에서 어떠한 타입이라도 유연하게 매개 변수로 받을 수 있다 (모든 타입 지정 가능)

    // 빈 인터페이스: 함수 매개변수, 리턴값, 구조체 필드 등으로 사용 (어떤 타입으로도 변환 가능)
    // 모든 타입을 나타내기 위해 빈 인터페이스 사용
    // 동적 타입으로 생각하면 이해가 쉽다 (타 언어의 Object 타입)

    // 예제
    var a interface{}
    printContent(a)

    a = 15
    printContent(a)

    a = 7.5
    printContent(a)

    a = "Golang!"
    printContent(a)

    a = true
    printContent(a)

    a = nil
    printContent(a)
}
