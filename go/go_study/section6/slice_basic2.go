// 자료형: 슬라이스 2
package main

import "fmt"

func main() {
    // 슬라이스 (슬라이스 참조 타입 증명)

    // 예제 1 (배열)
    arr1 := [3]int{1, 2, 3}
    var arr2 [3]int

    arr2 = arr1
    arr2[0] = 7

    fmt.Println("ex1-1:", arr1)
    fmt.Println("ex1-2:", arr2)
    fmt.Println()

    // 예제 2 (슬라이스)
    slice1 := []int{1, 2, 3}
    var slice2 []int

    slice2 = slice1
    slice2[0] = 7

    fmt.Println("ex2-1:", slice1)
    fmt.Println("ex2-2:", slice2)
    fmt.Println()

    // 예제 3 (슬라이스 예외 상황)
    slice3 := make([]int, 5, 10)
    fmt.Println("ex3-1:", slice3[4])
    // fmt.Println("ex3-2:", slice3[5]) // 길이 index over 예외
    // fmt.Println("ex3-3:", slice3[8]) // 길이 index over 예외
    fmt.Println()

    // 예제 4 (슬라이스 순회)
    for i, v := range arr1 {
        fmt.Println("ex4:", i, v)
    }
}
