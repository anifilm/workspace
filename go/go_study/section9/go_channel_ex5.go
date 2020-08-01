// 채널 (Channel) 심화 5
package main

import (
    "fmt"
    "time"
)

func main() {
    // 채널 (Channel) 셀렉트 구문
    // 채널 Select 구문 -> 채널에 값이 수신되면 해당 case문 실행
    // 일회성 구문이므로 for(반목문) 안에서 수행
    // default 구문 처리 주의!

    // 예제
    ch1 := make(chan int)
    ch2 := make(chan string)

    go func() {
        for {
            num := <-ch1 // 값 수신
            fmt.Println("ch1:", num)
            time.Sleep(250 * time.Millisecond)
        }
    }()

    go func() {
        for {
            ch2 <- "Golang Hi!" // 값 발신
            time.Sleep(500 * time.Millisecond)
        }
    }()

    go func() {
        i := 1
        for {
            select {
            case ch1 <- i: // 발신용도
                i++
            case str := <-ch2:
                fmt.Println("ch2:", str)
            }
        }
    }()

    time.Sleep(10 * time.Second)
}
