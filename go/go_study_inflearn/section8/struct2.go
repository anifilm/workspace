// 구조체 기본 2
package main

import "fmt"

type Account struct {
    number   string
    balance  float64
    interest float64
}

func (a Account) Calculate() float64 {
    return a.balance + (a.balance * a.interest)
}

func main() {
    // 다양한 선언 방법
    // &struct, struct: &struct 포인터를 받아오기, 역참조를 또 하기 때문에 속도는 조금 느리다
    // 인터페이스 메서드를 선언만 해둔 이후 -> 오버라이딩 해서 메서드에 포인터 리시버를 사용할 경우 반드시 &struct로 선언 할 것

    // 예제 1
    // 선언 방법 1
    var kim *Account = new(Account)
    kim.number = "245-901"
    kim.balance = 10000000
    kim.interest = 0.015

    // 선언 방법 2
    hong := &Account{number: "245-902", balance: 15000000, interest: 0.04}

    // 선언 방법 3
    lee := new(Account)
    lee.number = "245-903"
    lee.balance = 13000000
    lee.interest = 0.025

    fmt.Println("ex1-1:", kim)
    fmt.Println("ex1-2:", hong)
    fmt.Println("ex1-3:", lee)
    fmt.Println()

    // 예제 2
    fmt.Printf("ex2-1: %#v\n", kim)
    fmt.Printf("ex2-2: %#v\n", hong)
    fmt.Printf("ex2-3: %#v\n", lee)
    fmt.Println()

    // 예제 3
    fmt.Println("ex3-1:", int(kim.Calculate()))
    fmt.Println("ex3-2:", int(hong.Calculate()))
    fmt.Println("ex3-3:", int(lee.Calculate()))
}
