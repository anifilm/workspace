package main

import "fmt"

func main() {
    a := 2
    b := &a             // pointer
    a = 10
    fmt.Println(a, *b)  // b is pointer

    *b = 20
    fmt.Println(a, *b)
}
