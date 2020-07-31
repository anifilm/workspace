// 채널 (Channel) 심화 3
package main

import "fmt"

func receiveOnly(cnt int) <-chan int {
    sum := 0
    tot := make(chan int)
    go func() {
        for i := 1; i <= cnt; i++ {
            sum += i
        }
        tot <- sum
        tot <- 777
        tot <- 777
        close(tot)
    }()
    return tot
}

func total(ch <-chan int) <-chan int {
    tot := make(chan int)
    go func() {
        a := 0
        for i := range ch {
            a += i
        }
        tot <- a
    }()
    return tot
}

func main() {
    // 채널 (Channel)

    // 예제
    ch := receiveOnly(100) // 채널 반환
    output := total(ch)    // 채널 전달 후 반환

    // output <- 777 // 예외 발생

    fmt.Println("ex:", <-output)
}
