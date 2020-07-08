// 채널 버퍼링
package main

import "fmt"

func main() {

    messages := make(chan string, 2)

    messages <- "buffered"
    messages <- "channel"

    fmt.Println(<-messages)

    fmt.Println(<-messages)
}
