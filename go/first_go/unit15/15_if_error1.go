// if 조건문 사용하기 2
package main

import "fmt"

func main() {
    i := 10

    if i >= 5  // 컴파일 에러
    {
        fmt.Println("5 이상")
    }
}

/*
위와 같이 중괄호를 다음 줄에 작성하면 컴파일 에러 발생
*/
