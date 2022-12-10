package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	arguments := os.Args
	if len(arguments) == 1 {
		fmt.Println("Need one or more arguments!")
		return
	}

	var min, max float64
	for i := 1; i < len(arguments); i++ {
		n, err := strconv.ParseFloat(arguments[i], 64)
		if err != nil {
			continue
		}

		// 이 책의 독자가 지적한 바와 같이:
		//
		// 첫 번째 인수를 구문 분석할 수 없는 경우 'min/max' 변수는 초기화 되지 않는다.
		// 구문 분석 가능한 첫 번째 인수 (기본적으로 '0')
		// 이로 인해 구문 분석 가능한 모든 인수가 동일한 부호를 공유할 때 버그가 발생할 수 있다.
		if i == 1 {
			min = n
			max = n
			continue
		}

		if n < min {
			min = n
		}
		if n > max {
			max = n
		}
	}

	fmt.Println("Min:", min)
	fmt.Println("Max:", max)
}
