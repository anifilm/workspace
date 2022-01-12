// if 조건문 안에서 함수 사용하기 1
package main

import (
    "fmt"
    "io/ioutil"
)

func main() {
    var b []byte
    var err error

    b, err = ioutil.ReadFile("./hello.txt")

    if err == nil {
        fmt.Printf("%s", b)
    } else {
        fmt.Println(err)
    }
}
