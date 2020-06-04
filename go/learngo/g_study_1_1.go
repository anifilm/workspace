package main

import (
	"fmt"

	"./something"
)

func main() {
	fmt.Println("Hello world!")

	something.SayHello()
	something.SayBye()
}
