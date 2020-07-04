// 자료형: 슬라이스 1
package main

import "fmt"

func main() {
    // 길이를 지정하지 않음 (가변) -> 동적으로 크기가 늘어난다, 참조 타입 (레퍼런스)
    // 슬라이스 (길이 & 용량 개념)
    // 슬라이스 배열과 같지만 크기가 동적 할당 가능
    //              배열        vs  슬라이스 차이점 (중요)
    //              길이 고정   vs  길이 가변
    //                값 타입   vs  참조 타입
    //              복사 전달   vs  참조 값 전달
    // 전체 비교 연산자 사용가능 vs  비교 연산자 사용불가
    // 대부분 슬라이스를 사용

    // 선언 방법
    // 1. 배열처럼 선언
    // 2. make 함수 사용 -> make(자료형, 길이, 용량(생략시 길이와 같다))

    // 예제 1
    var slice1 []int
    slice2 := []int{}
    slice3 := []int{1, 2, 3, 4, 5}
    slice4 := [][]int{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}, // 콤마 주의
    }
    // slice2[0] = 1  // 값 할당이 없는 슬라이스는 인덱스로 값을 삽입할 수 없다.
    slice2 = append(slice2, 1, 2, 3) // append 를 이용하여 값 삽입 가능
    slice3[4] = 10                   // 값 수정 가능

    fmt.Printf("slice1: %-5T %d %d %v\n", slice1, len(slice1), cap(slice1), slice1)
    fmt.Printf("slice2: %-5T %d %d %v\n", slice2, len(slice2), cap(slice2), slice2)
    fmt.Printf("slice3: %-5T %d %d %v\n", slice3, len(slice3), cap(slice3), slice3)
    fmt.Printf("slice4: %-5T %d %d %v\n", slice4, len(slice4), cap(slice4), slice4)
    fmt.Println()

    // 예제 2
    var slice5 []int = make([]int, 5)
    var slice6 = make([]int, 5)
    slice7 := make([]int, 5, 10)
    slice8 := make([]int, 5)

    slice6[2] = 7 // 값 삽입

    fmt.Printf("slice5: %-5T %d %d %v\n", slice5, len(slice5), cap(slice5), slice5)
    fmt.Printf("slice6: %-5T %d %d %v\n", slice6, len(slice6), cap(slice6), slice6)
    fmt.Printf("slice7: %-5T %d %d %v\n", slice7, len(slice7), cap(slice7), slice7)
    fmt.Printf("slice8: %-5T %d %d %v\n", slice8, len(slice8), cap(slice8), slice8) // 길이와 용량이 같다.
    fmt.Println()

    // 예제 3
    var slice9 []int // nil 슬라이스 (길이와 용량 0)
    if slice9 == nil {
        fmt.Println("This is Nil Slice.")
    }
}
