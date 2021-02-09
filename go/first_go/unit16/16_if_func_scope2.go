// if 조건문 안에서 함수 사용하기 3
package main

import (
    "fmt"
    "io/ioutil"
)

func main() {
    if b, err := ioutil.ReadFile("./hello.txt"); err == nil {
        fmt.Printf("%s", b)
    } else {
        fmt.Println(err)
    }

    // 변수 b와 err은 if 조 문의 안에서 선언되었기 때문에 if문 밖에서는 사용 불가
    fmt.Println(b)   // 컴파일 에러, 변수 b를 사용할 수 없음
    fmt.Println(err) // 컴파일 에러, 변수 err을 사용할 수 없음
}
