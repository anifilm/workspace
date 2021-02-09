// for 반복문 사용하기 5
package main

import "fmt"

func main() {
    i := 0
    for i < 5 {
        fmt.Println(i)
        i++ // i = i + 1
    }
}

/*
// 초기값을 먼저 선언
for 조건식 {
    // 여기에 반복할 코드를 작성
    // 변화식도 함께 작성
}

for 키워드에 조건식만 설정하면 C, C++의 while 키워드처럼 동작한다. 이때는 초기값을 바깥에서 선언하고
변화식은 중괄호 블록 안에서 처리한다.
*/
