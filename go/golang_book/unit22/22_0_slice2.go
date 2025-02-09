// 슬라이스 사용하기 2
package main

import "fmt"

func main() {
    a := []int{32, 29, 78, 16, 81} // 슬라이스를 생성하면서 값을 초기화

    b := []int{
        32,
        29,
        78,
        16,
        81, // 여러 줄로 나열할 때는 마지막 요소에 콤마를 붙임
    }

    fmt.Println(a)
    fmt.Println(b)
}

/*
슬라이스를 생성하면서 값을 초기화하려면 { } 중괄호를 사용한다. 중괄호에서 값은 한 줄로 나열해도 되고 여러 줄로
나열해도 된다. (여러 줄로 나열할 때는 마지막 요소에도 콤마를 붙여준다.) 슬라이스이므로 대괄호에는 길이를 설정하지
않는다.
*/
