// Go 에러처리 심화 3
package main

import (
    "fmt"
    "log"
    "math"
    "time"
)

// 예외 (에러) 처리 구조체
type PowError struct {
    time    time.Time // 에러 발생 시간
    value   float64   // 파라미터
    message string    // 에러 메시지
}

func (e PowError) Error() string {
    return fmt.Sprintf("[%v] Error - Input Value (value: %g) - %s", e.time, e.value, e.message)
}

func Power(f, i float64) (float64, error) {
    if f == 0 {
        return 0, PowError{time: time.Now(), value: f, message: "0 값은 사용할 수 없습니다."}
    }
    if math.IsNaN(f) {
        return 0, PowError{time: time.Now(), value: f, message: "입력된 값이 숫자가 아닙니다."}
    }
    if math.IsNaN(i) {
        return 0, PowError{time: time.Now(), value: i, message: "입력된 값이 숫자가 아닙니다."}
    }
    return math.Pow(f, i), nil
}

func main() {
    // 에러 처리 고급
    // error 타입이 아닌 경우 에러 처리 방법
    // Error 메서드를 구현해서 사용자 정의 에러 처리 예제 심화
    // 구조체를 사용하여 세부적인 정보 출력

    // 예제 1
    v, err := Power(10, 3) // 정상 출력
    if err != nil {
        log.Fatal(err)
        // log.Fatal(err.Error())
    }

    fmt.Println("ex1:", v)

    // 예제 2
    t, err := Power(0, 3) // 예외 발생
    if err != nil {
        log.Fatal(err)
        // log.Fatal(err.Error())
        // fmt.Println(err.(PowError).time)
        // fmt.Println(err.(PowError).value)
        // fmt.Println(err.(PowError).message)
    }

    fmt.Println("ex2:", t)

}
