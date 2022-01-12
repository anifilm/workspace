// 패키지 별칭 사용하기 1
package main

import f "fmt" // fmt를 f로 가져옴

func main() {
    f.Println("Hello, world!")
}

/*
패키지 별칭은 Go언어에서 제공하는 기본 패키지와 내가 만든 패키지의 이름이 중복되는 경우
또는, 다른 사람이 만든 패키지와의 이림이 중복 될 때 활용할 수 있다.
*/
