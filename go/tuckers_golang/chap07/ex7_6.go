package main

import "fmt"

func printNo(n int) {
	if n == 0 { // [1] 재귀 호출 탈출 조건
		return
	}
	fmt.Println(n)
	printNo(n - 1)          // [2] 재귀 호출
	fmt.Println("After", n) // [3] 재귀 호출 이후 출력
}

func main() {
	printNo(3) // [4] 함수 호출
}
