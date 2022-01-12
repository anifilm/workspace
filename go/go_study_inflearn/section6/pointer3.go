// 자료형: 포인터 3
package main

import "fmt"

func rptc(n *int) {
    *n = 77 // &a 메모리 주소의 값을 변경
}

func vptc(n int) {
    n = 77 // 참조된 값을 변경, 참조로 변경된 값은 소멸 되므로 원본값은 변경되지 않는다
}

func vptc2(n int) int {
    n = 77   // 참조된 값을 변경
    return n // 참조된 값을 변경하여 값을 리턴
}

func main() {
    // 포인터 값 전달
    // 함수, 메소드 호출시에 매개별수 값을 복사 전달 -> 함수, 메소드 내에서는 원본 값 변경 불가능
    // 원본 값 변경을 위해서 포인터 전달 가능
    // 특히 크기가 큰 배열인 경우 값 복사 시에 시스탬 부담 -> 포인터 전달로 해결 But (슬라이스는 참조 전달)

    // 예제 1
    var a int = 10
    var b int = 10
    fmt.Println("ex1-1:", a)
    fmt.Println("ex1-2:", b)
    fmt.Println()

    // 예제 2
    rptc(&a) // &a 메모리 주소를 전달
    vptc(b)  //  b 값을 참조로 전달
    // vptc(&b) // 에러 발생

    fmt.Println("ex2-1:", a)
    fmt.Println("ex2-2:", b)
    fmt.Println()

    // 예제 3
    c := vptc2(b) // 참조된 값을 리턴받아 c에 대입
    fmt.Println("ex3:", c)
}
