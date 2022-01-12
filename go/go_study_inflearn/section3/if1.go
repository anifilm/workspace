// if 1
package main

import "fmt"

func main() {
    // 제어문 - if
    // 반드시 Boolean식으로 검사 (true, false) -> 0, 1 (사용불가, 자동 형변환 없음)
    // 소괄호 사용 X

    var a int = 20
    b := 30

    // 예제 1
    if a >= 15 {
        fmt.Println("15 이상")
    }

    // 예제 2
    if b >= 25 {
        fmt.Println("25 이상")
    }

    // 에러 발생 1
    /*
       if b >= 25
       {
           fmt.Println("25 이상")
       }
    */

    // 에러 발생 2
    /*
       if b >= 25
           fmt.Println("25 이상")
    */

    // 에러 발생 3
    /*
       if c := 1; c {
           fmt.Println("True")
       }
    */

    // 예제 (간단한 문장: Optional Statement)
    if c := 40; c >= 35 {
        fmt.Println("35 이상")
    }
    // c += 20		// 에러 발생
}
