// Go 에러처리 심화 2
package main

import (
    "fmt"
    "math"
)

// f의 i 제곱을 구하는 함수
func Power(f float64, i float64) (float64, error) {
    if f == 0 {
        return 0, fmt.Errorf("%g 값은 사용할 수 없습니다.", f)
    }
    return math.Pow(f, i), nil // 제곱, nil 반환
}

func main() {
    // 에러 처리 고급
    // Go Errorf 메서드 사용 -> 사용자 에러 처리 생성

    // 예제 1
    if i, err := Power(7, 3); err != nil {
        // fmt.Printf("Error Message: %s\n", err)
        fmt.Printf("Error Message: %s\n", err.Error())
    } else {
        fmt.Println("ex1:", i)
    }

    // 예제 2
    if f, err := Power(0, 3); err != nil {
        // fmt.Printf("Error Message: %s\n", err)
        fmt.Printf("Error Message: %s\n", err.Error())
    } else {
        fmt.Println("ex2:", f)
    }
}
