// 1, 2, ..., n의 합을 구합니다.
package chap01.section2

fun main() {
    println("1부터 n까지의 합을 구합니다.")
    print("n의 값: ")
    val n: Int = readLine()!!.toInt()

    var sum = 0 // 합
    var i = 1

    while (i <= n) {    // i가 n이하면 반복합니다.
        sum += i        // sum에 i를 더합니다.
        i++             // i 값을 1만큼 증가시킵니다.
    }
    println("1부터 ${n}까지의 합은 ${sum}입니다.")
}