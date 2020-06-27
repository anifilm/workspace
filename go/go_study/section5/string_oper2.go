// 데이터 타입: 문자열 연산 2
package main

import "fmt"

func main() {
    // 문자열 연산
    // 추출, 비교, 조합 (결합)

    // 예제 (비교)
    var str1 string = "Golang"
    var str2 string = "World"

    fmt.Println("ex1:", str1 == str2)
    fmt.Println("ex2:", str1 != str2)
    fmt.Println("ex3:", str1 > str2)
    fmt.Println("ex4:", str1 < str2)  // Go 문자열 -> 아스키 코드에 대한 사전적 비교
                                      // abc < ABC
}
