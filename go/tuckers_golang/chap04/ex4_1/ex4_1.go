package main

import "fmt"

func main() {
	var a int = 10                    // [1] a 변수 선언
	var msg string = "Hello Variable" // [2] msg 변수 선언

	a = 20               // [3] a 값 변경
	msg = "Good Morning" // [4] msg 값 변경
	fmt.Println(msg, a)  // [5] msg와 a 값 출력
}
