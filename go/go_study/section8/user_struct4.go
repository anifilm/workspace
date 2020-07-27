// 사용자 정의 타입 4
package main

import "fmt"

type shopingBasket struct{ cnt, price int }

func (b shopingBasket) purchase() int {
    return b.cnt * b.price
}

// 원본 수정 (참조 형식)
func (b *shopingBasket) rePurchaseP(cnt, price int) {
    b.cnt += cnt
    b.price += price
}

// 원본 수정X (값 전달 형식)
func (b shopingBasket) rePurchaseD(cnt, price int) {
    b.cnt += cnt
    b.price += price
}

func main() {
    // 리시버 전달(값, 참조) 형식
    // 함수는 기본적으로 값 호출 -> 변수의 값이 복사 후 내부 전달 (원본 수정X) -> 맵, 슬라이스 등은 참조 전달
    // 리시버(구조체)도 마찬가지로 포인터를 활용해서 메서드 내에서 원본 수정 가능

    // 예제 1
    bs1 := shopingBasket{3, 5000}
    fmt.Println("ex1(totPrice):", bs1.purchase())

    bs1.rePurchaseP(10, 10000) // 매개변수 전달 (참조), 원본값 수정
    fmt.Println("ex1(totPrice):", bs1.purchase())

    // 예제 2
    bs2 := shopingBasket{5, 5000}
    fmt.Println("ex2(totPrice):", bs2.purchase())

    bs2.rePurchaseD(10, 10000) // 매개변수 전달 (복사), 원본값 수정X
    fmt.Println("ex2(totPrice):", bs2.purchase())

    // 예제 3
    bs3 := shopingBasket{10, 10000}
    fmt.Println("ex3(totPrice):", bs3.purchase())

    bs3.rePurchaseP(-5, -3000) // 매개변수 전달 (참조)
    fmt.Println("ex3(totPrice):", bs3.purchase())
}
