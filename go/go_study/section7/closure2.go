// 함수 Closure 2
package main

import "fmt"

func main() {
    // 클로저 (Closure)
    // 익명함수를 사용할 경우 함수를 변수에 할당해서 사용 가능
    // 이때 함수는 일급 객체 이므로 변수의 값으로 사용 가능
    // 현재 범위에 있는 변수의 값을 캡처 후 호출 할때 변수 사용 가능 (선언 시점 기준)

    // 예제
    cnt := increaseCnt()

    fmt.Println("ex1:", cnt())
    fmt.Println("ex2:", cnt())
    fmt.Println("ex3:", cnt())
    fmt.Println("ex4:", cnt())
    fmt.Println("ex5:", cnt())
}

func increaseCnt() func() int {
    n := 0 // 지역변수 (캡처됨)
    return func() int {
        n += 1
        return n
    }
}
