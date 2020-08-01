// 채널 (Channel) 심화 2
package main

import "fmt"

func sum(cnt int) <-chan int {
    sum := 0
    tot := make(chan int)
    go func() {
        for i := 1; i <= cnt; i++ {
            sum += i
        }
        tot <- sum
    }()
    return tot // 채널을 리턴 타입으로 지정
}

func main() {
    // 채널 (Channel)
    // 채널 또한 함수의 반환 값으로 사용 가능

    // 예제
    ch := sum(100)

    fmt.Println("ex:", <-ch)
}
