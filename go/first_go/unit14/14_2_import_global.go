// 전역 패키지로 사용하기
package main

import . "fmt" // fmt를 전역 패키지로 가져옴

func main() {
    Println("Hello, world!")
}

/*
import . "fmt"처럼 패키지 이름 앞에 점을 붙여주면 현재 소스 코드 안에선는 fmt.을 생략하고
fmt의 함수, 변수, 상수를 사용할 수 있다.
단 패키지 여러 개를 전역 패키지로 가져왔을 때 함수, 변수, 상수 이름의 중복 가능성이 있으므로
유닛 테스트 같은 특별한 상황에서만 사용하는 것이 좋다.
*/