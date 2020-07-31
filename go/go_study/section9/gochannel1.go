// 채널 (Channel) 기초 1
package main

import (
    "fmt"
    "time"
)

func work1(v chan int) {
    fmt.Println("work1: start --->", time.Now())
    time.Sleep(1 * time.Second)
    fmt.Println("work1: end --->", time.Now())
    v <- 1
}

func work2(v chan int) {
    fmt.Println("work2: start --->", time.Now())
    time.Sleep(1 * time.Second)
    fmt.Println("work2: end --->", time.Now())
    v <- 2
}

func main() {
    // 채널 (Chennel)
    // 고루틴 간의 상호 정보 (데이터) 교환 및 실행 흐름 동기화 위해 사용: 채널 (동기식, 레퍼런스 타입)
    // 실행 흐름 제어 가능 (동기, 비동기) -> 일반 변수로 선언 후 사용 가능
    // 데이터 전달 자료형 선언 후 사용 (지정된 타입만 주고 받을 수 있음)
    // interface{} 전달을 통해서 자료형 상관없이 전송 및 수신 가능
    // 값을 전달 (복사 후: bool, int 등), 포인터 (슬라이스, 맵) 등을 전달 시에는 주의할 것! -> 동기화 사용 (Mutex)
    // 멀티 프로세싱 처리에서 교착 상태 (경쟁) 주의!
    // 채널 데이터 송수신 -> (송신: 채널 <- 데이터), (수신: (변수) <- 채널)

    // 예제
    fmt.Println("Main: Start --->", time.Now())

    // var ch chan int
    // ch = make(chan int)

    ch := make(chan int) // int형 채널 선언
    go work1(ch)
    go work2(ch)

    <-ch
    <-ch
    fmt.Println("Main: End --->", time.Now())
}
