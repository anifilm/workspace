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

	var a = 10
	fmt.Println(a)

	b := 20
	fmt.Println(b)

	var c int
	c = 30
	fmt.Println(c)
}

func foo() {
	fmt.Println("I'm in foo")
}
