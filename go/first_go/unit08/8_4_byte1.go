// 바이트 1
package main

import "fmt"

func main() {
    var num1 byte = 10   // 10진수
    var num2 byte = 0x32 // 16진수
    var num3 byte = 'a'  // 문자

    fmt.Println(num1, num2, num3)
}

/*
byte에는 보통 16진수, 문자 값을 저장한다. 실무에서는 바이너리 파일에서 데이터를 읽고 쓰거나,
데이터를 암호화, 복호화할 때 주로 사용한다.
*/
