// ushr 이해하기
package chap02.section4

fun main() {
    val number1 = 5
    val number2 = -5

    println(number1 shr 1)
    println(number1 ushr 1) // 변화 없음
    println(number2 shr 1)  // 부호비트가 1로 유지
    println(number2 ushr 1) // 부호비트가 0이 되면서 변경
}
