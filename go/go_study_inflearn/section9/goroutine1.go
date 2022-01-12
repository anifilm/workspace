// 고루틴 (Goroutine) 기초 1
package main

import (
    "fmt"
    "time"
)

func exe1() {
    fmt.Println("exe1 func start", time.Now())
    time.Sleep(1 * time.Second)
    fmt.Println("exe1 funx end", time.Now())
}

func exe2() {
    fmt.Println("exe2 func start", time.Now())
    time.Sleep(1 * time.Second)
    fmt.Println("exe2 funx end", time.Now())
}

func exe3() {
    fmt.Println("exe3 func start", time.Now())
    time.Sleep(1 * time.Second)
    fmt.Println("exe3 funx end", time.Now())
}

func main() {
    // 고루틴 (Goroutine)
    // 타 언어의 쓰레드 (Thread)와 비슷한 기능
    // 생성 방법 매우 간단, 리소스 매우 적게 사용
    // 즉, 수많은 고루틴을 동시 생성 및 실행 가능
    // 비동기적 함수 루틴 실행 (매우 적은 용량 차지) -> 채널을 통해 통신
    // 공유 메모리 사용시에 정확한 동기화 코딩 필요
    // 싱글 루틴에 비해 항상 빠른 처리결과는 아니다

    // 멀티 쓰레드 장점과 단점
    // 장점: 응답성 향상, 자원 공유를 효율적으로 활용, 작업이 분리되어 코드 간결
    // 단점: 구현하기 어려움, 테스트 및 디버깅의 어려움, 전체 프로세스에 영향 (사이드이펙트 문제), 성능 저하
    //      동기화 코딩 반드시 숙지, 데드락 문제, ...

    exe1() // 가장 먼저 실행 (일반적인 실행 흐름)

    // 예제
    fmt.Println("Main Routine Start:", time.Now())

    go exe2()
    go exe3()

    time.Sleep(4 * time.Second) // 4초 대기 (주석 처리하면 별도 고루틴이 즉시 종료됨, 메인함수 종료시 전체가 종료됨)
    // fmt.Scanln()             // 콘솔에세 테스트 할 경우 시간 대기 용도로 사용가능

    fmt.Println("Main Routine End:", time.Now())
}
