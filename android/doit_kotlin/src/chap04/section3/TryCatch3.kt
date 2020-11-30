// 스택의 추적
package chap04.section3

fun main() {
    val a = 6
    val b = 0
    val c: Int

    try {
        c = a / b  // 예외가 발생할 수 있는 코드
    } catch (e : Exception) {
        e.printStackTrace()
    } finally {
        println("finally 블록은 반드시 항상 실행됨")
    }
}

/*

스택을 추적하여 오류가 발생한 코드의 줄을 확인할 수 있다.

 */
