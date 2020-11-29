// null 검사 안전 호출 (세이프 콜 ?.)과 NPE 발생
package chap02.section3

fun main() {
    var str1: String? = "Hello Kotlin"
    str1 = null

//  println("str1: $str1 length: ${str1.length}")    // null을 허용하면 length가 실행될 수 없다
    println("str1: $str1 length: ${str1?.length}")   // str1을 세이프 콜로 안전하게 호출
//  println("str1: $str1 length: ${str1!!.length}")  // NPE 강제 발생
}
