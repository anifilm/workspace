// 함수 기초 2
package main

import "fmt"

func sum(i int, f func(int, int)) {
    f(i, 20) // add(10, 20)를 호출
}

func add(a, b int) {
    fmt.Println("ex1:", a+b)
}

func multi_value(i int) {
    i = i * 10
    fmt.Println("ex2-1:", i)
}

func multi_reference(i *int) {
    *i *= 10 // *i = *i * 10
    fmt.Println("ex3-1:", *i)
}

func main() {
    // 함수: 콜백
    // 함수: 값 전달 (call by value)
    // 함수: 참조 전달 (call by reference)

    // 예제 1 (콜백 호출)
    sum(10, add) // 함수 전달, 10 + 20 = 30
    fmt.Println()

    // 예제 2
    // call by value
    a := 100

    multi_value(a) // 값을 복사하여 전달하기 때문에 원본에는 반영되지 않는다
    fmt.Println("ex2-2:", a)
    fmt.Println()

    // 예제 3
    // call by reference
    b := 100

    multi_reference(&b) // 값을 메모리 주소로 전달하여 원본값에 영향을 주게된다 (원본값 변경됨)
    fmt.Println("ex3-2:", b)
}
