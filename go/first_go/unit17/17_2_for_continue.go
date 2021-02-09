// continue 사용하기 1
package main

import "fmt"

func main() {
    for i := 0; i < 5; i++ {
        if i == 2 { // i가 2일 때
            continue // 아래 부분 코드를 실행하지 않고 넘어감
        }

        fmt.Println(i)
    }
}

/*
반복문에서 특정 부분 이하는 실행하지 않고 넘어가려면 continue 키워드를 사용한다. 위의 코드는 2를 제외하고 0, 1, 3, 4를 출력한다.
*/
