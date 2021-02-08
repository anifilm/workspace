// 룬 2
package main

func main() {
    var r1 rune = "한"   // 컴파일 에러
    var r2 rune = '한글' // 컴파일 에러
    var r3 rune = "한글" // 컴파일 에러
}

/*
유니코드 문자에 큰 따옴표를 사용하거나 문자열을 rune에 저장하는 것은 허용되지 않는다. (컴파일 에러)
*/
