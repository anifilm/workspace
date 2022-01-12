// FizzBuzz 구현하기
package main

import "fmt"

func main() {
    for i := 1; i <= 100; i++ {
        switch { // case에 조건식을 지정했으므로 판단할 변수는 생략
        case i%3 == 0 && i%5 == 0: // 3의 배수이면서 5의 배수일 때
            fmt.Println("FizzBuzz") // FizzBuzz 출력
        case i%3 == 0: // 3의 배수일 때
            fmt.Println("Fizz") // Fizz 출력
        case i%5 == 0: // 5의 배수일 때
            fmt.Println("Buzz") // Buzz 출력
        default: // 아무 조건에도 해당하지 않을 때
            fmt.Println(i) // 숫자 출력
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
