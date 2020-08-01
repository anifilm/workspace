// 채널 (Channel) 심화 4
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
        i := 1
        for {
            ch1 <- i
            time.Sleep(250 * time.Millisecond)
            i++
        }
    }()

    go func() {
        for {
            ch2 <- "Golang Hi!"
            time.Sleep(500 * time.Millisecond)
        }
    }()

    go func() {
        for {
            select {
            case num := <-ch1:
                fmt.Println("ch1:", num)
            case str := <-ch2:
                fmt.Println("ch2:", str)
                // default:     // 사용하지 않음
                //     fmt.Println("default test")
            }
        }
    }()

    time.Sleep(10 * time.Second)
}
