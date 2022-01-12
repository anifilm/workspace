// 구조체 심화 5
package main

import "fmt"

type Employee struct {
    name   string
    salary float64
    bonus  float64
}

func (e Employee) Calculate() float64 {
    return e.salary + e.bonus
}

// 이름이 같은 함수 사용 (오버라이딩)
func (e Executives) Calculate() float64 {
    return e.Employee.salary + e.Employee.bonus + e.specialBonus
}

type Executives struct {
    Employee
    specialBonus float64
}

func main() {
    // 구조체 임베디드 메서드 오버라이딩 패턴

    // 예제 1 (직원)
    ep1 := Employee{"kim", 2000000, 300000}
    ep2 := Employee{"park", 1500000, 200000}

    fmt.Println("ex1-1:", int(ep1.Calculate()))
    fmt.Println("ex1-2:", int(ep2.Calculate()))

    // 예제 2 (임원)
    ex := Executives{
        Employee{"lee", 4000000, 1000000},
        1000000,
    }

    // Employee 구조체를 통해서 메서드를 호출
    // 오버라이딩 (정확한 값을 출력)
    fmt.Println("ex2-1:", int(ex.Calculate()))
    fmt.Println("ex2-2:", int(ex.Employee.Calculate()+ex.specialBonus))

    // 오버라이딩시 잘못된 예 (잘못된 값을 출력)
    // fmt.Println("ex2-3:", int(ex.Calculate()+ex.specialBonus))
}
