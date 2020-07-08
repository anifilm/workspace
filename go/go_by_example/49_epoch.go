// 타임스탬프
package main

import (
    "fmt"
    "time"
)

func main() {

    now := time.Now()
    fmt.Println(now)

    secs := now.Unix()
    nanos := now.UnixNano()
    millis := nanos / 1000000

    fmt.Println(secs)
    fmt.Println(millis)
    fmt.Println(nanos)

    fmt.Println(time.Unix(secs, 0))
    fmt.Println(time.Unix(0, nanos))
}
