// for 반복문 사용하기 3
package main

import "fmt"

func main() {
    for i := 0; i < 5; i++  // 컴파일 에러
        fmt.Println(i)
}

/*
중괄호는 생략할 수 없다. 컴파일 에러 발생
*/
