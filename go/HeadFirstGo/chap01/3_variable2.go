package main

import "fmt"

func main() {
	var quantity int = 4
	var length, width float64 = 1.2, 2.4
	var customerName string = "Damon Cole"

	/* 변수 타입 생략 가능
	var quantity = 4
	var length, width = 1.2, 2.4
	var customerName = "Damon Cole"
	*/

	fmt.Println(customerName)
	fmt.Println("has orderd", quantity, "sheets")
	fmt.Println("each with an area of")
	fmt.Println(length*width, "square meters")
}
