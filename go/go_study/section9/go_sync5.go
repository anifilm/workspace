// 고루틴 동기화 기초 5
package main

import (
    "fmt"
    "runtime"
    "sync"
    "time"
)

func main() {
    // 고루틴 동기화 객체
    // 동기화 상태 (조건) 메서드 사용
    // Wait, Signal, Broadcast

    // 시스템 전체 CPU 사용
    runtime.GOMAXPROCS(runtime.NumCPU())

    var mutex = new(sync.Mutex)
    var condition = sync.NewCond(mutex)

    ch := make(chan int, 5) // 비동기 버퍼 채널

    for i := 0; i < 5; i++ {
        go func(n int) {
            mutex.Lock()
            ch <- 777
            fmt.Println("Goroutine Wating:", n)
            condition.Wait() // 고루틴 대기 (멈춤)
            fmt.Println("Waiting End:", n)
            mutex.Unlock()
        }(i)
    }

    for i := 0; i < 5; i++ {
        // <-ch
        fmt.Println("received:", <-ch)
    }

    /*
       for i := 0; i < 5; i++ {
           mutex.Lock()
           fmt.Println("Wake Gorountine (Signal):", i)
           condition.Signal() // 하나씩 깨운다 (모든 고루틴 생성후)
           mutex.Unlock()
       }
    */

    mutex.Lock()
    fmt.Println("Wake Goroutine (Broadcast)")
    condition.Broadcast() // 한번에 다 깨운다
    mutex.Unlock()

    time.Sleep(2 * time.Second)
}
