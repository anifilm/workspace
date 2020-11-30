package chap03.section5.extras

fun main() {
    shortFunc(3) {
        println("First call: $it")
        return@shortFunc
    }
}

fun shortFunc(a: Int, out: (Int) -> Unit) {
    println("Before calling out()")
    out(a)
    println("After calling out()")
}
