// 열거형 3
package main

import "fmt"

func main() {
	// 열거형
	// 상수를 사용하는 일정한 규칙에 따라 숫자를 증가시키는 묶음
	const (
		_ = iota
		A
		B
		C
	)

	const (
		_ = iota + 0.75*2
		DEFAULT
		SILVER
		GOLD
		PLATINUM
	)

	fmt.Println("A:", A)
	fmt.Println("B:", B)
	fmt.Println("C:", C)

	fmt.Println("DEFAULT:", DEFAULT)
	fmt.Println("SILVER:", SILVER)
	fmt.Println("GOLD:", GOLD)
	fmt.Println("PLATINUM:", PLATINUM)

}
