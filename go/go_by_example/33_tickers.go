// 티커
package main

import (
    "fmt"
    "time"
)

func main() {

    ticker := time.NewTicker(time.Millisecond * 1000)
    go func() {
        for t := range ticker.C {
            fmt.Println("Tick at", t)
        }
    }()

    time.Sleep(time.Millisecond * 5200)
    ticker.Stop()
    fmt.Println("Ticker stopped")
}
