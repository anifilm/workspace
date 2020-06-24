// Go 초기화 함수 1
package main

import "fmt"

func init() {
	fmt.Println("Init is being execueted")
}

func main() {
	// init: 패키지 로드시에 가장 먼저 호출
	// 가장 먼저 초기화 되는 작업 작성시 유용
	fmt.Println("Main Source Code!")
}
