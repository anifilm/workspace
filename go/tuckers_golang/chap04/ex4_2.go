package main

import "fmt"

func main() {
	var minimunWage int = 10 // [1] 변수 minimunWage 선언 및 초기화
	var workingHour int = 20 // [2] 변수 workingHour 선언 및 초기화

	// [3] 변수 income 선언 및 초기화
	var income int = minimunWage * workingHour

	// 변수 minimunWage, workingHour, income 출력
	fmt.Println(minimunWage, workingHour, income)
}
