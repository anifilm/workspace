// Any형으로 인자를 받는 함수 만들기
package chap02.section3

fun main() {
    checkArg("Hello")   // 문자열을 인자로 넣음
    checkArg(5) // 숫자를 인자로 넣음
}

fun checkArg(x: Any) { // 인자를 Any형으로 받음
    if (x is String) {
        println("x is String: $x")
    }
    if (x is Int) {
        println("x is Int: $x")
    }
}
