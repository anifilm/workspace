package main

import (
	"fmt"
	"math"
)

var Global int = 1234
var AnotherGlobal = -5678

func main() {
	var j int
	i := Global + AnotherGlobal
	fmt.Println("Initial j value:", j)
	j = Global
	// math.Abs()의 매개변수는 float64 타입이므로
	// 적절하게 타입을 변환했다.
	k := math.Abs(float64(AnotherGlobal))
	fmt.Printf("Global=%d, i=%d, j=%d, k=%.2f.\n", Global, i, j, k)

}
