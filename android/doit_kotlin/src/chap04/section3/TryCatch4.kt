// 에러 메시지 출력
package chap04.section3

fun main() {
    val a = 6
    val b = 0
    val c: Int

    try {
        c = a / b  // 예외가 발생할 수 있는 코드
    } catch (e : Exception) {
        println(e.message)  // 에러 발생시 해당 에러 내용을 출력
    } finally {
        println("finally 블록은 반드시 항상 실행됨")
    }
}
