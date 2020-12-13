import java.util.Scanner

fun main() {
    val sc: Scanner = Scanner(System.`in`)
    var a: Int
    var b: Int

    while (sc.hasNextInt()) {
        a = sc.nextInt()
        b = sc.nextInt()
        println(a + b)
    }
}
