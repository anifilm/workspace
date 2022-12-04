package main

import "fmt"

func main() {
	// 일반적인 for 루프
	for i := 0; i < 10; i++ {
		fmt.Print(i*i, " ")
	}
	fmt.Println()

	// do-while 루프 처럼 동작하는 for 루프
	i := 0
	for ok := true; ok; ok = (i != 10) {
		fmt.Print(i*i, " ")
		i++
	}
	fmt.Println()

	// while 루프 처럼 동작하는 for 루프
	i = 0
	for {
		if i == 10 {
			break
		}
		fmt.Print(i*i, " ")
		i++
	}
	fmt.Println()

	// 아래 값은 슬라이스지만 range는 배열에서도 동작한다.
	aSlide := []int{-1, 2, 1, -1, 2, -2}
	for i, v := range aSlide {
		fmt.Println("index:", i, "value:", v)
	}
}
