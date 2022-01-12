// 패키지 1
package main

// 선언 방법 1
/*
import "fmt"
import "os"
*/

// 선언 방법 2
import (
    "fmt"
    "os"
)

func main() {
    // 패키지: 코드 구조화 및 재사용
    // 응집도, 결합도
    // Go: 패키지 단위의 독립적이고 작은 단위로 개발 -> 작은 패키지를 결합해서 프로그램을 작성할 것을 권고
    // 패키지 이름 = 디렉터리 이름
    // 같은 패키지 내 -> 소스파일 들은 디렉토리 명을 패키지 명으로 사용
    // 네이밍 규칙: 소문자 private, 대문자 public

    var name string

    fmt.Println("이름은?:")
    fmt.Scanf("%S", &name)
    fmt.Fprintf(os.Stdout, "Hi %s\n", name)
}
