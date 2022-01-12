// 자료형: 슬라이스 심화 2
package main

import (
    "fmt"
    "sort"
)

func main() {
    // 슬라이스 추출 및 정렬
    // slice[i:j]   s -> j 이전까지 추철
    // slice[i:]    i -> 끝까지 추출
    // slice[:j]    시작 -> j 이전까지 추출
    // slice[:]     시작부터 끝까지 추출

    // 예제 1
    slice1 := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

    fmt.Println("ex1-1:", slice1[:])             // 전체
    fmt.Println("ex1-2:", slice1[0:])            // index 0부터 끝까지
    fmt.Println("ex1-3:", slice1[:5])            // 시작부터 index 5이전까지
    fmt.Println("ex1-4:", slice1[0:len(slice1)]) // 0부터 전체길이까지: index 9, len(10)
    fmt.Println("ex1-5:", slice1[3:])            // index 3부터 끝까지
    fmt.Println("ex1-6:", slice1[:3])            // 시작부터 index 3이전까지
    fmt.Println("ex1-7:", slice1[1:3])           // index 1부터 index 3이전까지
    fmt.Println()

    // 예제 2 (정렬)
    // sort 패키지: https://golang.org/pkg/sort (참조)
    slice2 := []int{3, 6, 10, 9, 1, 4, 5, 8, 2, 7}
    slice3 := []string{"b", "d", "f", "a", "c", "e"}

    fmt.Println("ex2-1 (not sorted)   :", slice2)
    fmt.Println("ex2-1 (check sort)   :", sort.IntsAreSorted(slice2))

    sort.Ints(slice2) // Int형 정렬
    fmt.Println("ex2-2 (int sorted)   :", slice2)
    fmt.Println("ex2-2 (check sort)   :", sort.IntsAreSorted(slice2))
    fmt.Println()

    fmt.Println("ex3-1 (not sorted)   :", slice3)
    fmt.Println("ex3-1 (check sort)   :", sort.StringsAreSorted(slice3))

    sort.Strings(slice3) // String형 정렬
    fmt.Println("ex3-2 (string sorted):", slice3)
    fmt.Println("ex3-2 (check sort)   :", sort.StringsAreSorted(slice3))
}
