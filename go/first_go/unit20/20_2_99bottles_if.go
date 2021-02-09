// 99병의 맥주 구현하기
package main

import "fmt"

func main() {
    for bottles := 99; bottles >= 0; bottles-- {
        if bottles > 1 {
            fmt.Println(bottles, "bottles of beer on the wall,", bottles, "bottles of beer.")
            s := "bottles"
            if bottles-1 == 1 {
                s = "bottle"
            }
            fmt.Println("Take one down, pass it around,", bottles-1, s, "of beer on the wall.")
        } else if bottles == 1 {
            fmt.Println("1 bottle of beer on the wall, 1 bottle of beer.")
            fmt.Println("Take one down, pass it around, No more bottles of beer on the wall.")
        } else {
            fmt.Println("No more bottles of beer ont the wall, No more bottles of beer.")
            fmt.Println("Go to the store and buy some more, 99 bottles of beer on the wall.")
        }
    }
}
