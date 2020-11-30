// 람다식의 매개변수가 2개 이상인 경우 1
package chap03.section3

fun main() {
    // 매개변수가 2개 있는 람다식
    moreParam { a, b -> "Hello World! $a $b" }  // 매개변수 이름 생략 불가
}

// 매개변수가 2개 있는 람다식의 moreParam() 함수의 매개변수로 지정됨
fun moreParam(out: (String, String) -> String) {
    println(out("OneParam", "TwoParam"))
}
