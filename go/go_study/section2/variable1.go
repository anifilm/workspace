// 변수 1
package main

import "fmt"

func main() {
    // 기본 초기화
    // 정수타입: 0, 실수(소수점): 0.0 문자열: " ", Boolean: true false
    // 변수명: 숫자 첫글자X, 대소문자 구분, 문자 숫자 밑줄 특수기 사용가능
    // 변수 및 상수: 함수 내외에서 사용 가능
    var a int
    var b string
    var c, d, e int
    var f, g, h int = 1, 2, 3
    var i float32 = 11.4
    var j string = "Hi Golang!"
    var k = 4.75 // 선언 동시 초기화
    var l = "Hi Changwon!"
    var m = true

    a = 4
    b = "Hello World!"
    c, d = 1, 2
    e = 4

    fmt.Println("a:", a)
    fmt.Println("b:", b)
    fmt.Println("c:", c, " d:", d, " e:", e)
    fmt.Println("f:", f, " g:", g, " h:", h)
    fmt.Println("i:", i)
    fmt.Println("j:", j)
    fmt.Println("k:", k)
    fmt.Println("l:", l)
    fmt.Println("m:", m)

}
