// 자료형: 포인터 2
package main

import "fmt"

func main() {
    // 포인터

    // 예제 1
    type bag struct{ width, height, weight float32 } // 구조체
    var p *int = new(int)
    var p_bag *bag = &bag{20, 50, 30}

    fmt.Println("ex1-1:", p)
    fmt.Println("ex1-2:", p_bag)
    fmt.Println()

    // p++                  // 컴파일 에러, 포인터 연산 허용 안됨
    // p = 0xc071405232     // 컴파일 에러, 주소값 대입 허용 안됨

    // 예제 2
    i := 7
    p = &i
    // i 에 7 대입
    // p -> &i 주소값을 바라보게 한다

    fmt.Println("ex2-1:", i, *p, &i, p)
    // i 는 7 출력
    // *p -> &i 메모리 주소에 있는 값을 출력
    // &i 는 메모리 주소 출력
    // p -> &i 메모리 주소 출력

    *p++ // *p -> 메모리 주소에 있는 값을 1 증가시킴
    fmt.Println("ex2-2:", i, *p, &i, p)

    *p = 10 // 포인터 변수 역 참조값 변경
    fmt.Println("ex2-3:", i, *p, &i, p)

    i = 77 // 원본 변수값 변경
    fmt.Println("ex2-4:", i, *p, &i, p)
}
