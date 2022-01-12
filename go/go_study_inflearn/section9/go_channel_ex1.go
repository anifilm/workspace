// 채널 (Channel) 심화 1
package main

import (
    "fmt"
    "time"
)

func sendOnly(ch chan<- int, cnt int) {
    for i := 0; i < cnt; i++ {
        ch <- i
    }
    ch <- 777
    // fmt.Println(<-ch)   // 수신 전용 채널에서 발신 처리시 예외 발생
}

func receiveOnly(ch <-chan int) {
    for i := range ch {
        fmt.Println("received:", i)
    }
    fmt.Println(<-ch)
}

func main() {
    // 채널 (Channel)
    // 함수 등의 매개 변수에 수신 및 발신 전용 채널 지정 가능
    // 전용 채널 설정 후 방향이 다른 경우 예외 발생
    // 발신 전용: channel <- 데이터형
    // 수신 전용: <- channel
    // 매개 변수를 통해서 전용 채널을 확인 할 수 있다
    // 채널 또한 함수의 반환 값으로 사용 가능

    // 예제
    ch := make(chan int)

    go sendOnly(ch, 10) // 발신 전용
    go receiveOnly(ch)  // 수신 전용

    time.Sleep(4 * time.Second)
}
