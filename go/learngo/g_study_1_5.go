package main

import "fmt"

func supperAdd(numbers ...int) int {
	for i := 0; i < len(numbers); i++ {
		fmt.Println(numbers[i])
	}

	for index, number := range numbers {
		fmt.Println(index, number)
	}

	total := 0
	for _, number := range numbers {
		total += number
	}
	return total
}

func main() {
	result := supperAdd(1, 2, 3, 4, 5, 6, 7, 8, 9)
	fmt.Println(result)
}
