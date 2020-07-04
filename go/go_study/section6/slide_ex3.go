// 자료형: 슬라이스 심화 3
package main

import "fmt"

func main() {
    // 슬라이스 복사
    // copy(복사대상, 원본)
    // make로 공간을 할당 후 복사해야 한다.
    // 복사된 슬라이스 값을 변경해도 원본에는 영향 없음

    // 예제 1
    slice1 := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    slice2 := make([]int, 5)
    slice3 := []int{}

    copy(slice2, slice1)
    copy(slice3, slice1) // 값을 복사할수 없다.

    fmt.Println("ex1-1:", slice2)
    fmt.Println("ex1-2:", slice3) // 복사되지 않음
    fmt.Println()

    // 예제 2
    slice4 := []int{1, 2, 3, 4, 5}
    slice5 := make([]int, 5)

    copy(slice5, slice4)

    slice5[0] = 7
    slice5[4] = 10

    fmt.Println("ex2-1:", slice4) // 원본유지
    fmt.Println("ex2-2:", slice5) // 복사된 대상에만 값 변경
    fmt.Println()

    // 예제 3
    slice6 := [5]int{1, 2, 3, 4, 5}
    slice7 := slice6[0:3] // 주의! 부분적으로 슬라으스 추출은 참조된다 -> 값 변경시 원본 값에도 영향

    fmt.Println("ex3-1:", slice6)
    fmt.Println("ex3-2:", slice7)

    slice7[1] = 7
    fmt.Println("ex3-3:", slice6)
    fmt.Println("ex3-4:", slice7)
    fmt.Println()

    // 예제 4
    slice8 := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    slice9 := slice8[0:5:7] // 0부터 5이전까지, 7용량 지정

    fmt.Println("ex4-1:", slice9)
    fmt.Println("ex4-2:", len(slice9), cap(slice9))
}
