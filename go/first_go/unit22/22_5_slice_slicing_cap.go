// 부분 슬라이스 만들기 5 (부분 슬라이스 생성지 용량 지정)
package main

import "fmt"

func main() {
    a := []int{1, 2, 3, 4, 5, 6, 7, 8}

    b := a[0:6:8] // 인덱스 0부터 6이전까지 가져와서 부분 슬라이스로 만들고 용량을 8로 설정

    fmt.Println(len(b), cap(b)) // 6 8: 길이가 6이면 용량이 8인 슬라이스
    fmt.Println(b)              // [1 2 3 4 5 6]
}

/*
단, 용량 설정시 기존 슬라이스의 용량을 넘을 수 없다.
*/