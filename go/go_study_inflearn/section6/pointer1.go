// 자료형: 포인터 1
package main

import "fmt"

func main() {
    // 포인터
    // Go: 포인터 지원 (C, C++)
    // 포인터 지원 안함 (파이썬, C#, JAVA 등)
    // 주소의 값은 직접 변경 불가능 (잘못된 코딩으로 인한 버그 방지)
    // 메모리 주소를 출력 (값의 메모리 주소)
    // * (애스터리스크)로 사용
    // nil 로 초기화 (0 아님)

    // 예제 1
    var a *int            // a 포인터 선언 (방법 1)
    var b *int = new(int) // b 포인터 선언 (방법 2)

    fmt.Println(a) // nil 로 초기화
    fmt.Println(b) // nil 로 초기화

    i := 7 // i 에 7 대입
    a = &i // a -> &i 주소값을 바라보게 한다 (주소값 대입)
    b = &i // b -> &i 주소값을 바라보게 한다

    var c = &i // c 포인터 선언과 동시 주소값을 대입 (방법 3)
    d := &i    // d 포인터 선언과 동시 주소값을 대입 (방법 4)

    fmt.Println("ex1-1:", i)  // i 에 대입된 값을 출력
    fmt.Println("ex1-2:", &i) // &i 메모리 주소를 출력 (실행 할 때마다 다른 메모리에 저장되는 것을 볼수 있다)
    fmt.Println()

    fmt.Println("ex2-1:", *a) // *a -> 주소가 가리키는 값을 출력
    fmt.Println("ex2-2:", a)  // a -> 메모리 주소 출력
    fmt.Println("ex2-3:", &a) // 포인터 변수 a의 메모리 주소
    fmt.Println()

    fmt.Println("ex3-1:", *b)
    fmt.Println("ex3-2:", b)
    fmt.Println("ex3-3:", &b) // 포인터 변수 b의 메모리 주소
    fmt.Println()

    fmt.Println("ex4-1:", *c)
    fmt.Println("ex4-2:", c)
    fmt.Println("ex4-3:", &c) // 포인터 변수 c의 메모리 주소
    fmt.Println()

    fmt.Println("ex5-1:", *d)
    fmt.Println("ex5-2:", d)
    fmt.Println("ex5-3:", &d) // 포인터 변수 d의 메모리 주소
    fmt.Println()
}
