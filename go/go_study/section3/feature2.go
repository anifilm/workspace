// Go의 특징 2
package main

import "fmt"

func main() {
    // 문장 끝 세미콜론(;) 주의
    // 자동으로 끝에 세미콜론이 삽입됨
    // 두 문장을 한 문장에 표현할 경우 명시적으로 세미콜론 사용
    // 반복문 및 제어문 (if, for) 사용할 경우 주의

    // 예제 1
    for i := 0; i <= 10; i++ {
        // fmt.Print("ex1:"); fmt.Println(i)
        fmt.Print("ex1:")
        fmt.Println(i)
    }

    // 예제 2
    /*
       for j := 10; j >= 0; j--   // 예외 발생 (세미콜론)
       {
           fmt.Println("ex2:", j)
       }
    */
}
