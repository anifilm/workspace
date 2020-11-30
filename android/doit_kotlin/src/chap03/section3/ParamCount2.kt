// 람다식의 매개변수가 1개인 경우
package chap03.section3

fun main() {
    // 매개변수가 1개 있는 람다식
    oneParam({ a -> "Hello World! $a" })
    oneParam { a -> "Hello World! $a" } // 위와 동일 결과, 소괄호 생략 가능
    oneParam { "Hello World! $it" }     // 위와 동일 결과, it으로 대체 가능
}

// 매개변수가 1개 있는 람다식이 oneParam() 함수의 매개변수 out으로 지정됨
fun oneParam(out: (String) -> String) {
    println(out("OneParam"))
}
