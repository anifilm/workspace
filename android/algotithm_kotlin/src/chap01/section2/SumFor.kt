// 1, 2, ..., n의 합을 구합니다.
package chap01.section2

fun main() {
    println("1부터 n까지의 합을 구합니다.")
    print("n의 값: ")
    val n: Int = readLine()!!.toInt()

    var sum = 0     // 합

    for (i in 1..n)
        sum += i    // sum에 i를 더합니다.

    println("1부터 ${n}까지의 합은 ${sum}입니다.")
}