// Go의 특징 1
package main

import "fmt"

func main() {
    // 모호하거나 애매한 문법 금지
    // 후치 연잔자 허용, 전치 연산자는 비허용
    // 증감연산 반황값 없음
    // 포인터 (Pointer 허용, 연산 비허용)
    // 주석 사용법 숙지 (//, /* */)

    // 예제
    sum, i := 0, 0

    for i <= 100 {
        // sum += i++   // 예외 발생 (증감 연산 반환값)
        sum += i
        i++
        // ++i          // 예외 발생 (전위 증감)
    }
    fmt.Println("ex:", sum)
}
