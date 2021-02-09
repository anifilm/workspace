// continue 사용하기 2
package main

import "fmt"

func main() {
Loop: // Loop 레이블을 지정
    for i := 0; i < 3; i++ { // 반복문 1
        for j := 0; j < 3; j++ { // 반복문 2
            if j == 2 { // j가 2일 때
                continue Loop // 아래 부분 코드를 실행하지 않고 반복문 1부터 이어서 실행
            }

            fmt.Println(i, j)
        }
    }

    fmt.Println("Hello, world!")
}

/*
위와 같이 continue 키워드에 레이블을 지정할 수도 있다. (레이블 이름은 변수 이름을 짓는 규칙과 같다.)
중첩된 for 반복문에서 특정 부분 이하는 실행하지 않고 넘어 갈 때 continue 키워드에 레이블을 지정하면 편리하다. 이렇게 continue 키워드에 레이블을 지정하여 빠져나오면 특정 부분 이하는 실행하지 않고 레이블 바로 아래(바깥 쪽)의 for 반복문부터 이어서 실행하게 된다.
*/
