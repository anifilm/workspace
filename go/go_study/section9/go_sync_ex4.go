// 고루틴 동기화 고급 4
package main

import (
    "fmt"
    "runtime"
    "sync"
    "sync/atomic"
)

func main() {
    // 고루틴 동기화 고급
    // 원자성 사용 -> 기능적으로 분할 불가능한 완전 보증된 일련의 조작, 모두 성공하거나, 모두 실패
    // 모든 조작이 완료될 때까지 다른 프로세스 개입 불가
    // sync/atomic 에서 원자적 연산자 제공
    // https://golang.org/pkg/sync/atomic 에서 계열 확인 가능
    // 주로 공용 변수에 관한 계산 사용

    // 원자성 사용한 예제

    // 시스템 전체 CPU 사용
    runtime.GOMAXPROCS(runtime.NumCPU())

    var cnt int64 = 0
    wg := new(sync.WaitGroup)

    for i := 0; i < 5000; i++ {
        wg.Add(1)
        go func(n int) {
            // cnt += 1
            atomic.AddInt64(&cnt, 1)
            wg.Done()
        }(i)
    }

    for i := 0; i < 2000; i++ {
        wg.Add(1)
        go func(n int) {
            // cnt -= 1
            atomic.AddInt64(&cnt, -1)
            wg.Done()
        }(i)
    }

    // Add(7000) == Done(7000) 횟수 같아야 한다
    wg.Wait()

    // 방법 1
    fmt.Println("WaitGroup End! Cnt? >>>>>", cnt)

    // 방법 2 (추천)
    finalCnt := atomic.LoadInt64(&cnt)
    fmt.Println("WaitGroup End! Cnt? >>>>>", finalCnt)
}
