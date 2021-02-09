// for 반복문 사용하기 2
package main

import "fmt"

func main() {
    for i := 0; i < 5; i++  // 컴파일 에러
    {
        fmt.Println(i)
    }
}

/*
위와 같이 중괄호를 다음 줄에 작성하면 컴파일 에러 발생
*/
