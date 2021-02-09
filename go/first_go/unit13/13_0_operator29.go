// 연산자 알아보기 29
package main

import "fmt"

func main() {
    // != 같지 않다
    // 두 값이 다른지 비교한다.
    fmt.Println(1 != 2)             // true: 두 정수가 다르므로 true
    fmt.Println(3.5 != 5.5)         // true: 두 실수가 다르므로 true
    fmt.Println("Hello" != "world") // true: 두 문자열이 다르므로 true

    a := [3]int{1, 2, 3}
    b := [3]int{3, 2, 1}
    fmt.Println(a != b) // true: 두 배열이 다르므로 true

    c := []int{1, 2, 3}
    fmt.Println(c != nil) // true: 슬라이스를 nil과 비교하여 메모리가 할당되었는지 확인

    d := map[string]int{"Hello": 1}
    fmt.Println(d != nil) // true: 맵을 nil과 비교하여 메모리가 할당되었는지 확인

    e := 1
    f := 1
    var p1 *int = &e
    var p2 *int = &f
    fmt.Println(p1 != p2) // true: 포인터에 저장된 메모리 주소가 다르므로 true
}
