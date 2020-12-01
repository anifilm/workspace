/* Q3
네값의 최소값을 구하는 min4 메서드를 작성하세요.
fun min4(a: Int, b: Int, c: Int, d: Int): Int
 */
package chap01

fun min4(a: Int, b: Int, c: Int, d: Int): Int {
    var min = a
    if (b < min) min = b
    if (c < min) min = c
    if (d < min) min = d
    return min
}

fun main() {
    println("min4(3, 2, 1, 4) = " + min4(3, 2, 1, 4))
    println("min4(3, 2, 2, 1) = " + min4(3, 2, 2, 1))
    println("min4(3, 4, 2, 1) = " + min4(3, 4, 2, 1))
}
