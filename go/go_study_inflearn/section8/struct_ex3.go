// 구조체 심화 3
package main

import "fmt"

type Account struct {
    number   string
    balance  float64
    interest float64
}

// 리시버 변수 사용 안할 경우 func(_ Account) -> 밑줄로 생략 가능

func (a Account) CalculateD(bonus float64) { // 값(복사) 전달
    a.balance = a.balance + (a.balance * a.interest) + bonus
}

func (a *Account) CalculateP(bonus float64) { // 포인터(참조) 전달
    a.balance = a.balance + (a.balance * a.interest) + bonus
}

func main() {
    // 구조체 생성자 패턴 예제
    // 구조체 인스턴스 값 변경시 -> 포인터(참조) 전달, 일반적인 경우는 값(복사) 전달

    // 예제
    kim := Account{number: "245-901", balance: 10000000, interest: 0.015}
    lee := Account{number: "245-902", balance: 12000000, interest: 0.045}

    fmt.Println("ex1-1:", kim)
    fmt.Println("ex1-2:", lee)
    fmt.Println()

    kim.CalculateD(1000000)
    lee.CalculateP(1000000)

    fmt.Println("ex2-1:", int(kim.balance))
    fmt.Println("ex2-2:", int(lee.balance))
}
