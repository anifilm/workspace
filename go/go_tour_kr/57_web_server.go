// 웹 서버
package main

import (
    "fmt"
    "net/http"
)

type Hello struct{}

func (h Hello) ServerHTTP(
    w http.ResponseWriter,
    r *http.Request) {
    fmt.Fprint(w, "Hello!")
}

func main() {
    var h Hello
    http.ListenAndServe("localhost:4000", h)
}
