// 연산자 알아보기 40
package main

import "fmt"

func main() {
    // ++ 증가
    // 변수의 값을 1 증가시킨다. 사용할 수 있는 자료형은 정수, 실수, 복소수
    a := 1
    a++ // 2: 정수 1을 1 증가시켜서 2

    b := 1.5
    b++ // 2.5: 실수 1.5를 1 증가시켜서 2.5

    c := 1 + 2i
    c++ // (2+2i): 복소수 1+2i를 1 증가시켜서 2+2i

    fmt.Println(a) // 2
    fmt.Println(b) // 2.5
    fmt.Println(c) // (2+2i)
}

/*
Go언어에서는 ++ 연산자를 사용한 뒤 값을 대입할 수 없고, 변수 뒤에서만 사용할 수 있다. 따라서 ++ 연산자는 단독으로 사용하거나 if 조건문, for 반복문 안에서 주로 사용한다.

a := 1
b := a++  // 컴파일 에러, 연산된 값에 대한 대입을 허용하지 않는다.
c := ++a  // 컴파일 에러, 전위 증가 연산을 허용하지 않는다.
++a       // 컴파일 에러, 전위 증가 연산을 허용하지 않는다.
*/