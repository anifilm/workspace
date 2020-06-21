// 인터페이스 암시적으로 충족됩니다
package main

import (
    "fmt"
    "os"
)

type Reader interface {
    Read(b []byte) (n int, err error)
}

type Writer interface {
    Write(b []byte) (n int, err error)
}

type ReadWriter interface {
    Reader
    Writer
}

func main() {
    var w Writer

    // os.Stdout implements ReadWriter
    w = os.Stdout

    fmt.Fprintf(w, "hello, writer\n")
}
