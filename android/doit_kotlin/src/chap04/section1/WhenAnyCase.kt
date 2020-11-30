// 다양한 자료형의 인자 받기
package chap04.section1

class MyClass

fun main() {
    cases("Hello") // String
    cases(1)       // Int
    cases(1234L)   // Long
    cases(System.currentTimeMillis())   // 현재 시간을 Long형 값으로 반환 (밀리초 단위)
    cases(MyClass()) // 객체
}

fun cases(obj: Any) {
    when (obj) {
        1 -> println("Int: $obj")
        "Hello" -> println("String: $obj")
        is Long -> println("Long: $obj")
        !is String -> println("Not a String")
        else -> println("Unknown")
    }
}
