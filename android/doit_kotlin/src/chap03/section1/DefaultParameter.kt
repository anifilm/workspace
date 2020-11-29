// 함수의 매개변수에 기본값 지정하기
package chap03.section1

fun main() {
    val name = "임채영"
    val email = "anifilm02@gmail.com"

    add(name)
    add(name, email)
    add("정흥규")
    add("정흥규", "dooly@gmail.com")

    defaultArgs()       // 100 + 200
    defaultArgs(200)    // 200 + 200
}

fun add(name: String, email: String = "default@gmail.com") {
    val output = "${name} 님의 이메일은 ${email} 입니다."
    println(output)
}

fun defaultArgs(x: Int = 100, y: Int = 200) {
    println(x + y)
}
