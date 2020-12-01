/* Q2
세값의 최소값을 구하는 min3 메서드를 작성하세요.
fun min3(a: Int, b: Int, c: Int): Int
 */
package chap01

fun min3(a: Int, b: Int, c: Int): Int {
    var min = a
    if (b < min) min = b
    if (c < min) min = c
    return min
}

fun main() {
    println("min3(3, 2, 1) = ${min3(3, 2, 1)}")
    println("min3(3, 2, 2) = ${min3(3, 2, 2)}")
    println("min3(3, 1, 2) = ${min3(3, 1, 2)}")
    println("min3(3, 2, 3) = ${min3(3, 2, 3)}")
    println("min3(2, 1, 3) = ${min3(2, 1, 3)}")
    println("min3(3, 3, 2) = ${min3(3, 3, 2)}")
    println("min3(3, 3, 3) = ${min3(3, 3, 3)}")
    println("min3(2, 2, 3) = ${min3(2, 2, 3)}")
    println("min3(2, 3, 1) = ${min3(2, 3, 1)}")
    println("min3(2, 3, 2) = ${min3(2, 3, 2)}")
    println("min3(1, 3, 2) = ${min3(1, 3, 2)}")
    println("min3(2, 3, 3) = ${min3(2, 3, 3)}")
    println("min3(1, 2, 3) = ${min3(1, 2, 3)}")
}
