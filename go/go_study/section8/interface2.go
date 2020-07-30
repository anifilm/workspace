// 인터페이스 기본 2
package main

import "fmt"

type Dog struct {
    name   string
    weight int
}

// 구조체 Dog의 bite 메서드 구현
func (d Dog) bite() {
    fmt.Println(d.name, "bites!")
}

// 동물의 행동 인터페이스 선언
type Behavior interface {
    bite()
}

func main() {
    // 인터페이스 구현 예제

    // 예제 1
    dog1 := Dog{"poll", 10}
    var inter1 Behavior
    inter1 = dog1

    inter1.bite() // 인터페이스 -> Dog의 bite 메서드 실행
    // dog1.bite()

    // 예제 2
    dog2 := Dog{"mary", 12}
    inter2 := Behavior(dog2) // 인터페이스 선언과 동시에 초기화

    inter2.bite()
    // dog2.bite()

    fmt.Println()

    // 예제 3
    inters := []Behavior{dog1, dog2} // 슬라이스 타입 인터페이스 선언

    // 인덱스 형태로 실행
    for idx, _ := range inters {
        fmt.Print(idx, " -> ")
        inters[idx].bite()
    }
    fmt.Println()

    // 값 형태로 실행
    for _, val := range inters {
        fmt.Print(val, " -> ")
        val.bite()
    }
}
