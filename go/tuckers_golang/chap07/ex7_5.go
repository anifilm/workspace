package main

import "fmt"

func Divide(a, b int) (result int, success bool) { // [1] 반환할 변수명 명시
	if b == 0 {
		result = 0
		success = false
		return // [2] 명시적으로 반환할 값을 지정하지 않은 return문
	}
	result = a / b
	success = true
	return
}

func main() {
	c, success := Divide(9, 3)
	fmt.Println(c, success)

	d, success := Divide(9, 0)
	fmt.Println(d, success)
}
