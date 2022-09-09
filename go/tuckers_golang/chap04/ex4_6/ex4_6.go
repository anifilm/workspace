package main

import "fmt"

var g int = 10 // [1] 패키지 전역 변수 선언

func main() {
	var m int = 20 // [2] 지역 변수 선언

	{
		var s int = 50 // [3] 지역 변수 선언
		fmt.Println(m, s, g)
	} //[4] s 지역 변수는 사라짐

	// m = s + 20 // [5] Error
} // [6] main 함수 끝
