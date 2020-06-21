// 연습: HTTP 핸들러
package main

import "net/http"

type String string

type Struct struct {
    Greeting string
    Punct    string
    Who      string
}

func main() {
    // your http.Handle calls here
    http.ListenAndServe("localhost:4000", nil)
}
