// 특정 예외 처리
package chap04.section3

fun main() {
    val a = 6
    val b = 0
    val c: Int

    try {
        c = a / b  // 예외가 발생할 수 있는 코드
    } catch (e : ArithmeticException) {
        println("Exception is handled. ${e.message}")
    } finally {
        println("finally 블록은 반드시 항상 실행됨")
    }
}

/*

ArithmeticException
산술 연산에 대한 예외를 따로 특정해서 처리

 */
