// FizzBuzz 구현하기
package main

import "fmt"

func main() {
    for i := 1; i <= 100; i++ {
        if i%3 == 0 && i%5 == 0 {
            fmt.Println("FizzBuzz")
        } else if i%3 == 0 {
            fmt.Println("Fizz")
        } else if i%5 == 0 {
            fmt.Println("Buzz")
        } else {
            fmt.Println(i)
        }
    }
}

/*
FizzBuzz는 매우 간단한 프로그래밍 문제이며 규칙은 다음과 같다.
 - 1에서 100까지 출력
 - 3의 배수는 Fizz 출력
 - 5의 배수는 Buzz 출력
 - 3과 5의 공배수는 FizzBuzz 출력
*/
