// Go 초기화 함수 3
package main

import (
	"./lib3"
	"fmt"
)

var num int32

// 변수 초기화
func init() {
	num = 30
	fmt.Println("변수 초기화")
}

func main() {
	fmt.Println("10보다 큰 수?:", lib.CheckNum(num))
}
