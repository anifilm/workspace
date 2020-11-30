// xor 연사자로 두 값을 스왑하기
package chap02.section4

fun main() {
    var number1 = 12
    var number2 = 25

    number1 = number1 xor number2
    number2 = number1 xor number2
    number1 = number1 xor number2

    println("number1 = " + number1)
    println("number2 = " + number2)
}
