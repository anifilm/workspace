// 상수 1
package main

import "fmt"

func main() {
    // 상수
    // const 사용 초기화, 한번 선언 후 값 변경 금지, 고정된 값 관리용
    const a string = "Test1"
    const b = "Test2"
    const c int32 = 10 * 10
    // const d = getHeight()
    const e = 35.6
    const f = false

    // 에러 발생
    // const g string
    // g = "Test3"

    fmt.Println("a:", a, "b:", b, "c:", c, "e:", e, "f:", f)
}
