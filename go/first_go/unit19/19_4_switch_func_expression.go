// 조건식으로 분기하기 2
package main

import (
    "fmt"
    "math/rand"
    "time"
)

func main() {
    rand.Seed(time.Now().UnixNano()) // 현재 시간으로 Seed 값 설정

    switch i := rand.Intn(10); { // rand.Intn 함수를 실행한 뒤 i에 대입
    case i >= 3 && i < 6: // i가 3보다 크거나 같으면서 6보다 작을 때
        fmt.Println("3 이상, 6 미만") // 코드 실행
    case i == 9: // i가 9일 때
        fmt.Println("9") // 코드 실행
    default: // 모든 case에 해당하지 않을 때
        fmt.Println(i) // 코드 실행
    }
}

/*
switch 분기문 안에서 함수를 실행하고 결과값으로 분기할 수 있다. 이때는 함수를 호출하고 뒤에 ;(세미콜론)을 붙여준다.
또한, case에서는 값으로 분기할 수 없고 조건식만 사용할 수 있다.

 - math/rand: 무작위(랜덤) 패키지
   Seed: 시드 값을 설정하는 함수. 여기서는 time 패키지를 사용하여 현재 시간을 설정
   Intn: 랜덤 값을 생성. 랜덤 값의 범위는 0부터 매개변수로 설정한 값까지이다.

 - time: 시간 패키지
   Now: 현재 시간을 구하는 함수
   UnixNano: 유닉스 시간을 나노 초 단위로 반환
*/
