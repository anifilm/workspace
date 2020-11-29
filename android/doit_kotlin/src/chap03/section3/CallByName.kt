// 람다식 이름으로 사용해 호출하기
package chap03.section3

fun main() {
    val result = callByName(otherLambda)    // 람다식 이름으로 호출
    println(result)
}

fun callByName(b: () -> Boolean): Boolean { // 람다식 자료형으로 선언된 매개변수
    println("callByName function")
    return b()
}

val otherLambda: () -> Boolean = {
    println("otherLambda function")
    true
}
