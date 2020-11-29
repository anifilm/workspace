// 조건문을 활용해 null을 허용한 변수 검사하기
package chap02.section3

fun main() {
    var str1: String? = "Hello Kotlin"
    str1 = null

    // 조건식을 통해 null 상태 검사
    val len = if (str1 != null) str1.length else -1
    println("str1: $str1 length: ${len}")
}
