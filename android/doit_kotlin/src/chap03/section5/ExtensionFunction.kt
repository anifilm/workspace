// String 클래스에 확장 함수 추가하기
package chap03.section5

fun main() {
    val source = "Hello World!"
    val target = "Kotlin"
    println(source.getLongString(target))
    // "Hello World!".getLongString("Kotlin") 형태로 작성 가능

}

// String 클래스를 확장해 getLongString() 함수 추가
fun String.getLongString(target: String): String =
        if (this.length > target.length) this else target
