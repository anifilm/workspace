// 반복문에서 변수 여러 개 사용하기 2
package main

import "fmt"

func main() {
    for i, j := 0, 0; i < 10; i++, j+=2 { // 컴파일 에러, syntax error: unexpected comma, expecting
        fmt.Println(i, j)
    }
}

/*
위와 같이 변화식 부분에서 병렬 할당을 사용하지 않고 i++, j+=2처럼 변화식을 그대로 나열하면 컴파일 에러가 발생하므로 주의해야 한다.
*/
