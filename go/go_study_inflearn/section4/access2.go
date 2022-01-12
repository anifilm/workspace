// 패키지 접근 제어 2
package main

import (
    "fmt"

    _ "./lib"        // 빈 식별자 사용
    testlib "./lib2" // 별칭 사용
)

func main() {
    // 패키지 접근 제어
    // 별칭 사용
    // 빈 식별자 사용

    fmt.Println("100보다 큰 수?:", testlib.CheckNum1(101))
}
