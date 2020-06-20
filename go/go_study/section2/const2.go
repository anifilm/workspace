// 상수 2
package main

import "fmt"

func main() {
    const a, b int = 10, 99
    const c, d, e = true, 0.84, "Test"
    const (
        x, y int16 = 50, 90
        i, k       = "Data", 7776
    )

    fmt.Println("a:", a, "b:", b, "c:", c, "d:", d, "e:", e)
    fmt.Println("x:", x, "y:", y, "i:", i, "k:", k)
}
