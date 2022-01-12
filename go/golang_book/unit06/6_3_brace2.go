// 중괄호 2
package main

import "fmt"

func main()
{  // 컴파일 에러
    var num int = 1
    if num == 1
    {  // 컴파일 에러
        fmt.Println(num)
    }
}

/*
함수와 제어문을 시작할 때는 반드시 같은 줄에서 중괄호를 시작합니다. 다음과 같이 중괄호를 새 줄부터 시작하면
컴파일 에러가 발생하게 된다.
*/
