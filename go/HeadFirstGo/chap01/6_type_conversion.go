package main

import "fmt"

func main() {
	var length float64 = 1.2
	var width int = 2

	fmt.Println("Area is", length*width)            // 타입이 다르므로 연산 불가
	fmt.Println("length > width ?", length > width) // 타입이 다르므로 비교 불가
}
