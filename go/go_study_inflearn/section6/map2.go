// 자료형: 맵 2
package main

import "fmt"

func main() {
    // 맵 (Map)
    // 맵 조회 및 순회 (Iterator)

    // 예제 1
    map1 := map[string]string{
        "google": "http://google.com",
        "naver":  "http://naver.com",
        "daum":   "http://daum.net",
    }
    fmt.Println("ex1-1:", map1["google"])
    fmt.Println("ex1-2:", map1["naver"])
    fmt.Println("ex1-3:", map1["daum"])
    fmt.Println()

    // 예제 2 (순서 없으므로 랜덤)
    for k, v := range map1 {
        fmt.Println("ex2:", k, v)
    }
    fmt.Println()

    for _, v := range map1 { // 변수 선언 후 사용 안하면 예외 발생
        fmt.Println("ex3:", v)
    }
}
