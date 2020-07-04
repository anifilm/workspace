// 자료형: 배열 1
package main

import "fmt"

func main() {
    // 배열
    // 배열은 용량, 길이가 항상 같다.
    //              배열        vs  슬라이스 차이점 (중요)
    //              길이 고정   vs  길이 가변
    //                값 타입   vs  참조 타입
    //              복사 전달   vs  참조 값 전달
    // 전체 비교 연산자 사용가능 vs  비교 연산자 사용불가
    // 대부분 슬라이스를 사용

    // cap()    : 배열, 슬라이스 용량
    // lan()    : 배열, 슬라이스 개수

    // 예제 1
    var arr1 [5]int
    var arr2 [5]int = [5]int{1, 2, 3, 4, 5}
    var arr3 = [5]int{1, 2, 3, 4, 5}
    arr4 := [5]int{1, 2, 3, 4, 5}
    arr5 := [5]int{1, 2, 3}         // 기본 0으로 초기화
    arr6 := [...]int{1, 2, 3, 4, 5} // 배열 크기 자동 설정 (선언시)
    arr7 := [5][5]int{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}, // 콤마 주의
    }

    arr1[2] = 5 // 값 삽입

    fmt.Printf("arr1: %-5T %d %v\n", arr1, len(arr1), arr1)
    fmt.Printf("arr2: %-5T %d %v\n", arr2, len(arr2), arr2)
    fmt.Printf("arr3: %-5T %d %v\n", arr3, len(arr3), arr3)
    fmt.Printf("arr4: %-5T %d %v\n", arr4, len(arr4), arr4)
    fmt.Printf("arr5: %-5T %d %v\n", arr5, len(arr5), arr5)
    fmt.Printf("arr6: %-5T %d %v\n", arr6, len(arr6), arr6)
    fmt.Printf("arr7: %-5T %d %v\n", arr7, len(arr7), arr7)
    fmt.Println()

    // 예제 2
    arr8 := [5]int{1, 2, 3, 4, 5}
    arr9 := [5]int{ // 여러 줄 선언, 콤마 주의
        1,
        2,
        3,
        4,
        5,
    }
    arr10 := [...]string{"Kim", "Lee", "Park"}

    fmt.Printf("arr8: %-5T %d %v\n", arr8, len(arr8), arr8)
    fmt.Printf("arr9: %-5T %d %v\n", arr9, len(arr9), arr9)
    fmt.Printf("arr10: %-5T %d %v\n", arr10, len(arr10), arr10)
}
