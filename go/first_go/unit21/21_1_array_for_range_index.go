// 배열 순회하기 3
package main

import "fmt"

func main() {
    a := [5]int{32, 29, 78, 16, 81}

    for i := range a { // i에는 값 대신 인덱스가 들어감
        fmt.Println(i)
    }
}

/*
위와 같이 value 변수를 생략하면 첫 번째 리턴값인 인덱스만 들어가므로 주의해야 한다.
*/
