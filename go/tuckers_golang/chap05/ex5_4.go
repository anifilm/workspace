package main

import "fmt"

func main() {
	str := "Hello\tGo\t\tWorld\n\"Go\"is Awesome!\n" // [1] 문자열

	fmt.Print(str)        // [2] 문자열을 기본 서식으로 출력
	fmt.Printf("%s", str) // [3] 문자열을 %s 서식으로 출력
	fmt.Printf("%q", str) // [4] 문자열을 %q 서식으로 출력
}
