// 상수 사용하기 4
package main

import "fmt"

func main() {
    // const 키워드와 ()를 사용하면 상수 여러 개를 한 번에 선언하고 초기화 할 수 있다.
    const (
        x, y      int = 30, 50      // x = 30, y = 50
        age, name     = 10, "Maria" // age = 10, name = "Maria"
    )

    fmt.Println(x, y)
    fmt.Println(age, name)
}

/*
상수도 자료형을 지정하거나 생략 가능하다. 자료형을 지정하지 않으면 상수의 자료형을 대입하는 값의 자료형
으로 결정된다. 단, 변수와는 달리 초기값을 반드시 지정해야 한다.
*/
