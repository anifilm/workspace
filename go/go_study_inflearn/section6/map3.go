// 자료형: 맵 3
package main

import "fmt"

func main() {
    // 맵 (Map)
    // 맵 값 변경 및 삭제

    // 예제 1 (자료 수정)
    map1 := map[string]string{
        "google": "http://google.com",
        "naver":  "http://naver.com",
        "daum":   "http://daum.net",
        "home1":  "http://home1.com",
    }
    fmt.Println("ex1-1:", map1)

    map1["home2"] = "http://home2.com" // 추가
    fmt.Println("ex1-2:", map1)

    map1["home2"] = "http://home2-2.com" // 수정
    fmt.Println("ex1-3:", map1)
    fmt.Println()

    // 예제 2 (자료 삭제)
    delete(map1, "home2")
    fmt.Println("ex2-1:", map1)

    delete(map1, "home1")
    fmt.Println("ex2-2:", map1)

}
