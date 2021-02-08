// 문자열 수정하기
package main

import "fmt"

func main() {
    var s1 string = "Hello, world!"
    s1 = "abcdefg" // 다른 문자열을 대입할 수 있음

    fmt.Println(s1[0]) // 97: ASCII 코드 'a' (배열 형태로 각 문자에 접근 가능)

    //s1[0] = 'z' // 컴파일 에러 (문자열의 내용 직접 수정은 불가)
}
