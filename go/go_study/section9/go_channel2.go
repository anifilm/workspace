// 채널 (Channel) 기초 2
package main

import "fmt"

func rangeSum(rg int, ch chan int) {
    sum := 0
    for i := 1; i <= rg; i++ {
        sum += 1
    }
    ch <- sum
}

func main() {
    // 채널 (Channel)

    // 예제
    ch := make(chan int)

    go rangeSum(1000, ch)
    go rangeSum(7000, ch)
    go rangeSum(5000, ch)

    // 순서대로 데이터 수신 (동기): 채널에서 값 수신 완료 될 때까지 대기
    result1 := <-ch
    result2 := <-ch
    result3 := <-ch

    fmt.Println("ex1-1:", result1)
    fmt.Println("ex1-2:", result2)
    fmt.Println("ex1-3:", result3)
}
