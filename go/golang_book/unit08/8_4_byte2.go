// 바이트 2
package main

func main() {
    var num1 byte = "a"  // 컴파일 에러
    var num2 byte = 'ab' // 컴파일 에러
    var num3 byte = "ab" // 컴파일 에러
}

/*
문자에 큰 따옴표를 사용하거나 문자열은 byte에 저장할 수 없다.
*/
