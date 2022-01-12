// 함수 기초 1
package main

import (
    "fmt"
    "log"
    "reflect"
    "strconv"
)

// 함수 선언 위치는 어느 곳이든 가능
func helloGolang() {
    fmt.Println("ex1: Hello, Golang!")
}

func say_one(m string) {
    fmt.Println("ex2:", m)
}

func sum(x int, y int) int {
    return x + y
}

func main() {
    // 함수
    // 선언: func 키워드로 선언
    // func 함수명(매개변수) (반환타입 or 반환값 변수명): 반환값 존재
    // func 함수명() (반환타입 or 반환값 변수명): 매개변수 없음, 반환값 존재
    // func 함수명(매개변수): 매개변수 존재, 반환값 없음
    // 타 언어와 달리 반환값 (return value) 여러개 가능

    // 예제 1
    helloGolang()

    // 예제 2
    say_one("Hello, World!")

    // 예제 3
    result := sum(5, 5)
    fmt.Println("ex3-1:", result)
    fmt.Println("ex3-2:", sum(10, 10))
    fmt.Println()

    // strconv.Itoa(int): int to string & strconv.Atoi(string): string to int
    s := strconv.Itoa(sum(10, 20))
    i, err := strconv.Atoi("42") // string to int 변환시 err value 반환 확인 필요
    if err != nil {
        log.Println(err)
    }

    fmt.Println("ex4-1:", s, reflect.TypeOf(s))
    fmt.Println("ex4-2:", i, reflect.TypeOf(i))
}
