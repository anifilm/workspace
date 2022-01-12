// 변수 여러 개 선언하기 2
package main

func main() {
    // 변수가 선언된 뒤에도 변수 여러 개에 값을 대입할 수 있다.
    // 변수1, 변수2, 변수3 = 값1, 값2, 값3
    var x, y int
    var age int

    x, y, age = 10, 20, 5 // x = 10, y = 20, age = 5: 병렬 할당
}
