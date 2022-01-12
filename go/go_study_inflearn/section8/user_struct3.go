// 사용자 정의 타입 3
package main

import "fmt"

type totCost func(int, int) int

func describe(cnt int, price int, fn totCost) {
    fmt.Printf("cnt: %d, price: %d, orderPrice: %d", cnt, price, fn(cnt, price))
}

func main() {
    // Go -> 객체지향 타입을 구조체로 정의한다 (클래스, 상속 개념이 없음)
    // 상태, 메소드를 분리해서 정의 (결합성 없음)
    // 사용자 정의 타입: 구조체, 인터페이스, 기본 타입 (int, float, string...), 함수
    // 구조체와 -> 메서드 연결을 통해서 타 언어의 클래스 형식 처럼 사용 가능 (객체 지향)

    // 함수 사용자 정의 타입
    // 예제
    var orderPrice totCost
    orderPrice = func(cnt int, price int) int {
        return cnt * price
    }
    describe(3, 1000000, orderPrice)
}
