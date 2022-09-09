package main

import "fmt"

func main() {
	var a int
	var b int

	n, err := fmt.Scanln(&a, &b) // [1] 입력 두 개 받기
	if err != nil {
		fmt.Println(n, err)
	} else {
		fmt.Println(n, a, b)
	}
}
