// 여러 패키지 사용하기 2
package main

import "fmt"
import "runtime"

func main() {
    fmt.Println("CPU Count:", runtime.NumCPU())
}
