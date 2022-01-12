// 부분 슬라이스 만들기 3
package main

import "fmt"

func main() {
    a := []int{1, 2, 3, 4, 5}

    fmt.Println(a[:])        // [1 2 3 4 5]: 처음부터 끝까지
    fmt.Println(a[0:])       // [1 2 3 4 5]: 인덱스 0부터 끝까지
    fmt.Println(a[:5])       // [1 2 3 4 5]: 처음부터 인덱스 5이전까지
    fmt.Println(a[0:len(a)]) // [1 2 3 4 5]: 인덱스 0부터 슬라이스 길이(5)이전까지

    fmt.Println(a[3:])  // [4 5]: 인덱스 3부터 끝까지
    fmt.Println(a[:3])  // [1 2 3]: 처음부터 인덱스 3이전까지
    fmt.Println(a[1:3]) // [2 3]: 인덱스 1부터 인덱스 3이전까지
}
