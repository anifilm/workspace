// 연산자 알아보기 38
package main

import "fmt"

func main() {
    // * 역참조 연산
    // 현재 포인터 변수에 저장된 메모리에 접근하여 값을 가져오거나 저장한다.
    a := new(int)
    *a = 1          // a에 저장된 메모리에 접근하여 1을 저장
    fmt.Println(*a) // 1: a에 저장된 메모리에 접근하여 값을 가져옴
}
