// 인터페이스 심화 2
package main

import (
    "fmt"
    "reflect"
)

func main() {
    // 인터페이스 타입 변환 (Type Assertion)
    // 실행 (런타임)시에는 인터페이스에 할당한 변수를 실제 타입으로 변환 후 사용해야 하는 경우
    // 인터페이스.(타입) 형식 -> 형변환
    // interfaceVal.(type)

    // 예제 1
    var a interface{} = 15

    b := a
    c := a.(int)
    // d := a.(float64) // 예외 발생

    fmt.Println("ex1-1:", a)
    fmt.Println("ex1-2:", reflect.TypeOf(a))

    fmt.Println("ex1-3:", b)
    fmt.Println("ex1-4:", reflect.TypeOf(b))

    fmt.Println("ex1-5:", c)
    fmt.Println("ex1-6:", reflect.TypeOf(c))

    fmt.Println()

    // 예제 2 (저장된 타입 실제 타입 검사)
    if v, ok := a.(int); ok { // 해당 타입값, 타입체크 결과
        fmt.Println("ex2:", v, ok)
    }
}
