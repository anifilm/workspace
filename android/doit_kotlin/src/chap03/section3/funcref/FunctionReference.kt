// 참조에 의한 호출 방식으로 일반 함수 호출하기
package chap03.section3.funcref

fun main() {
    // 인자와 반환값이 있는 함수
    val res1 = funcParam(3, 2, ::sum)
    println(res1)

    // 인자가 없는 함수
    hello(::text)   // 반환값 없음

    // 일반 변수에 값처럼 할당
    val liskLambda = ::sum
    println(liskLambda(6, 6))
}

fun sum(a: Int, b: Int) = a + b

fun text(a: String, b: String) = "Hi! $a $b"

fun funcParam(a: Int, b: Int, c: (Int, Int) -> Int): Int {
    return c(a, b)
}

fun hello(body: (String, String) -> String): Unit {
    println(body("Hello", "World"))
}
