// 자료형: 배열 2
package main

import "fmt"

func main() {
    // 배열 순회
    // 예제
    arr := [5]int{1, 10, 100, 1000, 10000}

    // len 길이 반복
    for i := 0; i < len(arr); i++ {
        fmt.Println("ex1:", arr[i])
    }
    fmt.Println()

    // range 사용
    for i, v := range arr {
        fmt.Println("ex2:", i, v)
    }
    fmt.Println()

    // 인덱스 생략
    for _, v := range arr {
        fmt.Println("ex3", v)
    }
    fmt.Println()

    // 인덱스 응용
    for v := range arr {
        fmt.Println("ex4", v, arr[v])
    }
}
