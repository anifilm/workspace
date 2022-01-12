// switch 3
package main

import "fmt"

func main() {
    // 예제 1
    a := 30 / 15
    switch a {
    case 2, 4, 6: // i가 2, 4, 6일때
        fmt.Println("a ->", a, "짝수")
    case 1, 3, 5: // i가 1, 3, 5일때
        fmt.Println("a ->", a, "홀수")
    }

    // 예제 2
    switch i := 75; {
    case i >= 50 && i < 100:
        fmt.Println("i ->", i, "50 이상 100 미만")
    case i >= 0 && i < 50:
        fmt.Println("i ->", i, "0 이상 50 미만")
    }

    // 예제 3
    c := "success"
    d := 2

    switch d {
    case 1:
        fmt.Println(1)
    case 2:
        if c == "success" {
            fmt.Println("Login Success")
            break // 필요한 경우
        }
        fmt.Println("Pass")
    }

    // 예제 4
    switch e := "go"; e {
    case "java":
        fmt.Println("Java")
        fallthrough
    case "go":
        fmt.Println("Go")
        fallthrough
    case "python":
        fmt.Println("Python")
        fallthrough
    case "ruby":
        fmt.Println("Ruby")
        fallthrough
    case "c":
        fmt.Println("C")
        // fallthrough      // 마지막 라인 fallthrough 사용 불가
    }
}
