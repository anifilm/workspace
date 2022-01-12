// 사용자 정의 타입 2
package main

import "fmt"

type cnt int

func main() {
    // Go -> 객체지향 타입을 구조체로 정의한다 (클래스, 상속 개념이 없음)
    // 상태, 메소드를 분리해서 정의 (결합성 없음)
    // 사용자 정의 타입: 구조체, 인터페이스, 기본 타입 (int, float, string...), 함수
    // 구조체와 -> 메서드 연결을 통해서 타 언어의 클래스 형식 처럼 사용 가능 (객체 지향)

    // 기본 자료형 사용자 정의 타입
    // 예제 1
    a := cnt(5)

    fmt.Println("ex1:", a)

    // 예제 2
    var b cnt = 15

    fmt.Println("ex2:", b)

    // testConvertT(b)  // 예외 발생 (중요!) 사용자 정의 타입 <-> 기본 타입: 매개변수 전달시에 변환해야 사용 가능 (int(변수))
    testConvertT(int(b))

    testConvertD(b)
    testConvertD(cnt(10)) // 사용가능
    // testConvertD(int(b)) // 예외 발생 (중요!) 사용자 정의 타입 <-> 기본 타입 : 매개변수 전달시에 변환해야 사용 가능 (cnt(5), int(5))
}

func testConvertT(i int) {
    fmt.Println("ex3: (Default Type):", i)
}

func testConvertD(i cnt) {
    fmt.Println("ex3: (Custom Type):", i)
}
