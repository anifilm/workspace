// 인터페이스 기본 4
package main

import "fmt"

type Dog struct {
    name   string
    weight int
}

type Cat struct {
    name   string
    weight int
}

func (c Dog) run() {
    fmt.Println("Dog is running!")
}

func (c Cat) run() {
    fmt.Println("Cat is running!")
}

// 익명 인터페이스 (타입 정의X)
func act(animal interface{ run() }) {
    animal.run()
}

func main() {
    // 익명 인터페이스 사용 예제 (즉시 선언후 사용)

    // 예제
    dog := Dog{"poll", 10}
    cat := Cat{"bob", 5}

    // 개 행동 실행
    act(dog)

    // 고양이 행동 실행
    act(cat)
}
