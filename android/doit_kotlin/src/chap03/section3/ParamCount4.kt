// 람다식의 매개변수가 2개 이상인 경우 2
package chap03.section3

fun main() {
    // 특정 매개변수의 생략, 첫번째 문자열은 사용하지 않고 생략
    omitArgs("Arg1", "Arg2") { _, b -> "Hello World! $b" }
}

// 특정 매개변수의 생략
fun omitArgs(a: String, b: String, out: (String, String) -> String) {
    println(out(a, b))
}
