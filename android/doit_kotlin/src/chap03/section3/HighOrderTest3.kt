// 인자와 반환값이 없는 람다식 함수
package chap03.section3

fun main() {
    val out: () -> Unit = {println("Hello World!")} // 인자와 반환값이 없는 람다식 선언
    // 자료형 추론이 가능하므로 val out = {println("Hello World!")}와 같이 생략 가능
    out()   // 함수처럼 사용 가능

    val new = out   // 람다식이 들어 있는 변수를 다른 변수에 할당
    new ()
}
