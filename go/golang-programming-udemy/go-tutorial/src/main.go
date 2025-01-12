package main

import (
	"fmt"

	"hello/greeting"
	"hello/typeof"
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
	typeof.Type(b)

	var c string = "30"
	fmt.Println(c)
	typeof.Type(c)
}

func foo() {
	fmt.Println("I'm in foo")
}
