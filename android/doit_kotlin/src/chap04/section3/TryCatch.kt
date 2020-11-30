// 0으로 나누었을 때 예외 처리하기
package chap04.section3

fun main() {
    val a = 6
    val b = 0
    val c: Int

    try {
        c = a / b  // 예외 발생!
    } catch (e : Exception) {
        println("Exception is handled.")
    } finally {
        println("finally 블록은 반드시 항상 실행됨")
    }
}
