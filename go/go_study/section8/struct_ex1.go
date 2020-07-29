// 구조체 심화 1
package main

import "fmt"

type Account struct {
    number   string
    balance  float64
    interest float64
}

func NewAccount(number string, balance float64, interest float64) *Account { // 포인터 반환 아닌 경우 값 복사로 사용
    return &Account{number, balance, interest} // 구조체 인스턴스를 생성한 뒤 포인터를 리턴
}

func main() {
    // 구조체 생성자 패턴 예제

    // 예제 1
    kim := Account{number: "246-901", balance: 10000000, interest: 0.015}

    var lee *Account = new(Account) // new 함수로 초기화와 동시에 구조체 필드값 할당은 할 수 없다
    lee.number = "245-902"
    lee.balance = 13000000
    lee.interest = 0.025

    fmt.Println("ex1-1:", kim)
    fmt.Println("ex1-2:", lee)

    // 예제 2 (생성자 함수로 초기화)
    park := NewAccount("245-903", 17000000, 0.04)
    fmt.Println("ex2:", park)
}
