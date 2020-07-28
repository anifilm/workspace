// 구조체 기본 1
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
    // 구조체
    // Go의 필드들의 집합체 또는 컨테이너
    // 필드는 가지지만 메서드는 가지지 않는다
    // 객체지향 방식을 지원 -> 리시버를 통해 메서드와 연결
    // 상속, 객체, 클래스의 개념이 없다
    // 구조체 -> 구조체 선언 -> 구조체 인스턴스 (리시버)

    // 예제 1
    kim := Account{number: "245-901", balance: 10000000, interest: 0.015}
    lee := Account{number: "245-902", balance: 12000000} // 기본값 0으로 초기화
    park := Account{number: "245-903", interest: 0.025}
    choi := Account{"245-904", 15000000, 0.03}

    fmt.Println("ex1-1:", kim)
    fmt.Println("ex1-2:", lee)
    fmt.Println("ex1-3:", park)
    fmt.Println("ex1-4:", choi)
    fmt.Println()

    // 예제 2
    fmt.Println("ex2-1:", int(kim.Calculate()))
    fmt.Println("ex2-2:", int(lee.Calculate()))
    fmt.Println("ex2-3:", int(park.Calculate()))
    fmt.Println("ex2-4:", int(choi.Calculate()))
}
