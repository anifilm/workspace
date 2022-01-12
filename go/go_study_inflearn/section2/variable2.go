// 변수 2
package main

import "fmt"

func main() {
    // 여러 개 선언
    var (
        name      string = "anifilm"
        height    int32
        weight    float32
        isRunning bool
    )

    height = 170
    weight = 70.3
    isRunning = true

    fmt.Println("name:", name, "height:", height, "weight:", weight, "isRunning:", isRunning)
}
