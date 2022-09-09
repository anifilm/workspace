package main

import "fmt"

func Add(a int, b int) int { // [1]
	return a + b // [2]
}

func main() {
	c := Add(3, 6) // [3]
	fmt.Println(c) // [4]
}
