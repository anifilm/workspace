// 채널 (Channel) 기초 6
package main

import (
    "fmt"
)

func main() {
    // 채널 (Channel)
    // Close: 채널 닫기, 주의 -> 닫힌 채널에 값 전송시 패닉(예외) 발생
    // Range: 채널 안에서 값을 꺼낸다 (순회), 채널 닫아야(Close) 반복문 종료 -> 채널이 열려 있고 값 전송하지 않으면 계속 대기

    // 예제
    ch := make(chan int)

    go func() {
        for i := 1; i < 4; i++ {
            ch <- i
        }
    }()

    val1, ok1 := <-ch
    fmt.Println("ex1-1:", val1, ok1)

    val2, ok2 := <-ch
    fmt.Println("ex1-2:", val2, ok2)

    val3, ok3 := <-ch
    fmt.Println("ex1-3:", val3, ok3)

    close(ch) // 채널 닫기

    val4, ok4 := <-ch
    fmt.Println("ex1-4:", val4, ok4)
}
