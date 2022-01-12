// 데이터 타입: 문자열 1
package main

import (
    "fmt"
    "unicode/utf8"
)

func main() {
    // 문자열 string
    // 큰따옴표 " ", 백스쿼트 ` ` 작성
    // Golang: 문자 char 타입 존재하지 않음 -> rune(int32)로 문자 코드 값으로 표현
    // 문자: 작은 따옴표 ' ' 로 작성
    // 자주 사용하는 espace: \\, \', \", \a (콘솔벨), \b (백스페이스), \f (쪽바꿈), \n (줄바꿈), \r (복귀), \t (탭)...

    // 예제 1
    var str1 string = "c:\\go_study\\src\\" // -> C:\go_study\src\
    str2 := `c:\go_study\src\`

    fmt.Println("ex1-1:", str1, "\t", "ok1")
    fmt.Println("ex1-2:", str2, "\t", "ok2")
    fmt.Println()

    // 예제 2
    var str3 string = "Hello, world!"
    var str4 string = "안녕하세요"
    var str5 string = "\ud55c\uae00"             // 한글 유니코드(4자리는 소문자 -> u)
    var str6 string = "\U0000d55c\U0000ae00"     // 한글 유니코드 (8자리는 대문자 -> U)
    var str7 string = "\xed\x95\x9c\xea\xb8\x80" // UTF-8 인코딩 바이트 코드

    fmt.Println("ex2-1:", str3)
    fmt.Println("ex2-2:", str4)
    fmt.Println("ex2-3:", str5)
    fmt.Println("ex2-4:", str6)
    fmt.Println("ex2-5:", str7)
    fmt.Println()

    // 예제 3 길이 (바이트 수)
    fmt.Println("ex3-1:", len(str3)) // Hello, world! -> 영문 문자 하나당 1byte
    fmt.Println("ex3-2:", len(str4)) // 안녕하세요     -> 한글 문자 하나당 3byte
    fmt.Println("ex3-3:", len(str5)) // 한글
    fmt.Println("ex3-4:", len(str6)) // 한글
    fmt.Println()

    // 예제 4 길이 (실제 길이)
    fmt.Println("ex4-1:", utf8.RuneCountInString(str3)) // Hello, world
    fmt.Println("ex4-2:", utf8.RuneCountInString(str4)) // 안녕하세요
    fmt.Println("ex4-3:", len([]rune(str4)))            // len으로 실제 길이 구하는 방법
}
