// 자료형: 맵 4
package main

import "fmt"

func main() {
    // 맵 (Map)
    // 맵 조회 시 주의점

    // 예제 1
    map1 := map[string]int{
        "apple":  15,
        "banana": 115,
        "orange": 1115,
        "lemon":  0,
    }

    value1 := map1["apple"]
    value2 := map1["kiwi"]
    value3, ok := map1["kiwi"]

    fmt.Println("ex1-1:", value1)
    fmt.Println("ex1-2:", value2)
    fmt.Println("ex1-3:", value3, ok) // 두번째 리턴 값으로 키 존재 유무 확인
    fmt.Println()

    // 예제 2
    if value, ok := map1["kiwi"]; ok {
        fmt.Println("ex2-1:", value)
    } else {
        fmt.Println("ex2-2: kiwi is not exist!")
    }

    if value, ok := map1["lemon"]; ok {
        fmt.Println("ex2-3:", value)
    } else {
        fmt.Println("ex2-4: lemon is not exist!")
    }

    if _, ok := map1["melon"]; !ok {
        fmt.Println("ex2-5: melon is not exist!")
    }
}
