// 연습: 이미지
package main

import (
    "code.google.com/p/go-tour/pic"
)

type Image struct{}

func main() {
    m := Image{}
    pic.ShowImage(m)
}
