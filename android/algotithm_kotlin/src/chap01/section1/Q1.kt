/* Q1
네값의 최대값을 구하는 max4 메서드를 작성하세요.
static int max4(int a, int b, int c, int d)
작성한 메서드를 테스트 하기 위해 main 메서드를 포함한 프로그램을 작성해야 합니다.
이후의 문제도 마찬가지 입니다.
 */
package chap01

fun max4(a: Int, b: Int, c: Int, d: Int): Int {
    var max = a
    if (b > max) max = b
    if (c > max) max = c
    if (d > max) max = d
    return max
}

fun main() {
    println("max4(3, 2, 1, 4) = ${max4(3, 2, 1, 4)}");
    println("max4(3, 2, 2, 1) = ${max4(3, 2, 2, 1)}");
    println("max4(3, 4, 2, 1) = ${max4(3, 4, 2, 1)}");
}
