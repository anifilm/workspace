// 룬 1
package main

import "fmt"

func main() {
    var r1 rune = '한'
    var r2 = '\ud55c'     // '한'
    var r3 = '\U0000d55c' // '한'

    fmt.Printf("%c %c %c\n", r1, r2, r3)
}

/*
rune은 유니코드(UTF-8) 문자 코드를 저장할 때 사용한다. ' '(작은 따옴표)로 묶어주어야 하며 문자 그대로 저장하거나
\u 또는 \U를 사용하여 유니코드 문자 코드로 저장할 수도 있다.
*/
