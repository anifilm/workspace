// 함수 심화 3
package main

import "fmt"

func fact(n int) int {
    if n == 0 {
        return 1
    }
    return n * fact(n-1)
}

func prtHello(n int) {
    if n == 0 {
        return
    }
    fmt.Println("ex2: (", n, ")", "hi!")
    prtHello(n - 1)
}

func main() {
    // 함수 고급
    // 재귀 함수 (Recursion)
    // 장점: 코드 간결하여 보기 좋음, 오류 수정 쉬운편
    // 단점: 코드를 이해하기 어렵고, 기억공간을 많이 사용, 무한루프 가능성

    // 예제 1
    x := fact(7)
    fmt.Println("ex1:", x)

    // 예제 2
    prtHello(10)
}
