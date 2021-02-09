// goto 사용하기 2
package main

import "fmt"

func main() {
    var a int = 1

    if a == 1 {
        goto ERROR // 여기까지만 실행하고 ERROR 레이블로 이동 (아래 코드는 실행하지 않는다.)
        b := 1
        fmt.Println(b)
    }

ERROR:
    fmt.Println("Error")
}

/*
goto 키워드 바로 다음에 있는 코드는 실행되지 않고 넘어가게 되므로 주의해야 한다.
위의 코드는 변수 선언 부분과 fmt.Println(b) 부분은 실행되지 않고 넘어가므로 Error만 출력한다.
*/
