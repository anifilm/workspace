// null 처리하기
package chap02.section3

fun main() {
    var str1: String? = "Hello Kotlin" // null 허용
    str1 = null

    println("str1: $str1")
}

/*

변수에 null 할당을 허용하려면 자료형 뒤에 물음표(?) 기호를 명시해야 합니다.
String과 String?이 서로 다른 자료형이라는 것만 확실히 이해해야 합니다.

 */
