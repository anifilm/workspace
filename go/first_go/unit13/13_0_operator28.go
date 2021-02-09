// 연산자 알아보기 28
package main

import "fmt"

func main() {
    // == 같다
    // 두 값이 같은지 비교한다.
    // - 실수형은 값을 연산한 뒤에는 오차가 발생하므로 ==로 비교할 때 주의해야 한다.
    // - 문자열은 내용이 같은지 비교
    // - 배열은 요소의 내용이 모두 같은지 비교
    // - 슬라이스와 맵은 배열과는 달리 내용을 비교할 수 업고, 메모리에 할당되어 있는지 확인
    // - 포인터는 주소가 같은지 비교
    fmt.Println(1 == 1)             // true: 두 정수가 같으므로 true
    fmt.Println(3.5 == 3.5)         // true: 두 실수가 같으므로 true
    fmt.Println("Hello" == "Hello") // true: 두 문자열이 같으므로 true

    a := [3]int{1, 2, 3}
    b := [3]int{1, 2, 3}
    fmt.Println(a == b) // true: 두 배열이 같으므로 true

    c := []int{1, 2, 3}
    fmt.Println(c == nil) // false: 슬라이스를 nil과 비교하여 메모리가 할당되었는지 확인

    d := map[string]int{"Hello": 1}
    fmt.Println(d == nil) // false: 맵을 nil과 비교하여 메모리가 할당되었는지 확인

    e := 1
    var p1 *int = &e
    var p2 *int = &e
    fmt.Println(p1 == p2) // true: 포인터에 저장된 메모리 주소가 같으므로 true
}
