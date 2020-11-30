// 람다식의 매개변수 테스트하기
package chap03.section3

fun main() {
    // 매개변수 없는 람다식
    noParam({ "Hello World!" })
    noParam { "Hello World!" }   // 위와 동일 결과, 소괄호 생략 가능
}

// 매개변수가 없는 람다식이 noParam 함수의 매개변수 out으로 지정됨
fun noParam(out: () -> String) = println(out())
