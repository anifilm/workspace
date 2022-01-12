// 구조체 기본 3
package main

import "fmt"

type car struct {
    name  string
    color string
}

func main() {
    // 함수의 매개변수로 전달시에는 기본적으로 값 복사이므로, 필요시 포인터로 전달해야 한다

    // 예제
    c1 := car{"220d", "red"}
    c2 := new(car)
    c2.name, c2.color = "sonata", "white"
    c3 := &car{}
    c4 := &car{"520d", "black"}

    fmt.Println(c1)
    fmt.Println(c2)
    fmt.Println(c3)
    fmt.Println(c4)
}
