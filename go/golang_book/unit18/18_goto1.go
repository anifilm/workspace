// goto 사용하기 1
package main

import "fmt"

func main() {
    var a int = 1

    if a == 1 {
        goto ERROR1 // 에러 1 상황이면 ERROR1 레이블로 이동
    }

    if a == 2 {
        goto ERROR2 // 에러 2 상황이면 ERROR2 레이블로 이동
    }

    if a == 3 {
        goto ERROR1 // 에러 1 상황이면 ERROR1 레이블로 이동
    }

    fmt.Println(a)
    fmt.Println("Success") // 정상 실행

    return

ERROR1: // 에러 처리 1
    fmt.Println("Error 1")
    return

ERROR2: // 에러 처리 2
    fmt.Println("Error 2")
    return
}

/*
goto 키워드는 정해진 레이블로 곧장 이동한다. 보통 프로그래밍에서 goto 키워드는 권장되지 않지만 일부 상황에서는
코드를 간단하게 만들 수 있으므로 적절히 활용하는 것이 중요하다.
goto 키워드는 goto 레이블 형식으로 사용한다. 여기서 레이블 이름은 변수 이름을 짓는 규칙과 같다.

goto LABEL  // 이동할 레이블을 지정

LABEL:
    // 실행할 코드를 작성

위과 같이 goto 키워드와 레이블을 사용하면 중복 코드없이 간단하게 작성할 수 있다.
*/
