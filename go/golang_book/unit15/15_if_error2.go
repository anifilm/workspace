// if 조건문 사용하기 3
package main

import "fmt"

func main() {
    i := 10

    if i >= 5  // 컴파일 에러
        fmt.Println("5 이상")
}

/*
중괄호는 생략할 수 없다. 컴파일 에러 발생
*/
