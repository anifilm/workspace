// break 사용하기 1
package main

import "fmt"

func main() {
	i := 0
	for {
		if i > 4 { // i가 4가 되는 순간
			break // 반복문이 중단된다.
		}

		fmt.Println(i)
		i++ // i = i + 1, 변화식에서 조건을 변경
	}
}

/*
for 키워드에 아무것도 설정하지 않으면 무한 루프가 된다. 즉, C, C++의 for(;;)처럼 동작한다.
이때 반복문을 중단하려면 중괄호 블록안에서 조건을 정하고 break 키워드를 사용하면 된다. 물론 변화식도 중괄호 블록 안에서 설정한다.
*/
