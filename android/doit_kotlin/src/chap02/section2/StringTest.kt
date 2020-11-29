// 문자열 선언 및 할당
package chap02.section2

fun main() {
    var str1: String = "Hello"  // 명시적 선언
    var str2 = "World"  // str2는 String으로 추론
    var str3 = "Hello"  // 동일한 String Pool을 가리킴

    println("str1 === str2: ${str1 === str2}")
    println("str1 === str3: ${str1 === str3}")
}
