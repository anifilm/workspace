// internal 가시성 테스트하기
package chap05.section5.internal

fun main() {
    val otheric = InternalClass()

    println(otheric.i)
    otheric.icFunc()
}
