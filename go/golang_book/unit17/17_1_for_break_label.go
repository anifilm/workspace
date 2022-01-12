// break 사용하기 2
package main

import "fmt"

func main() {
Loop: // Loop 레이블을 지정
	for i := 0; i < 3; i++ { // 반복문 1
		for j := 0; j < 3; j++ { // 반복문 2
			if j == 2 { // j가 2일 때
				break Loop // 중첩된 반복문을 빠져나감
			}

			fmt.Println(i, j)
		}
	}

	fmt.Println("Hello, world!")
}

/*
위와 같이 break 키워드에 레이블을 지정할 수도 있다. (레이블 이름은 변수 이름을 짓는 규칙과 같다.)
중첩된 for 반복문에서 빠져나올 때 break 키워드에 레이블을 지정하면 편리하다. 이렇게 break 키워드에 레이블을
지정하여 빠져나오면 모든 for 반복문을 더 이상 실행하지 않고 완전히 중단할 수 있다.
*/
