// Exercise: Loops and Functions
package main

import (
    "fmt"
    "math"
)

func Sqrt(x float64) float64 {
    z := float64(1)

    for {
        result := z - (z*z-x)/(2*z)
        if float32(result) == float32(z) {
            return result
        }
        z = result
    }
}

func main() {
    fmt.Println(math.Sqrt(10))
    fmt.Println(Sqrt(10))
}
