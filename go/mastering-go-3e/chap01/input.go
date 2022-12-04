package main

import "fmt"

func main() {
	// 사용자 입력받기
	fmt.Printf("Please give me your name: ")
	var name string
	fmt.Scanln(&name)
	fmt.Println("Your name is", name)
}
