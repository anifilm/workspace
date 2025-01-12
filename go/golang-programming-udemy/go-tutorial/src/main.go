package main

import (
	"fmt"

	"hello/greeting"
)

func main() {
	fmt.Println("Hello, World!")
	foo()

	n, _ := fmt.Println("Hello, World!", 47, true)
	fmt.Println(n)
	//fmt.Println(err)

	greeting.Say("Lazies")
}

func foo() {
	fmt.Println("I'm in foo")
}
