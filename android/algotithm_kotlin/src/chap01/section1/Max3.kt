// 3개의 정수값을 입력하고 최대값을 구합니다.
package chap01

fun main() {
    println("세 정수의 최대값을 구합니다.")
    print("a의 값: ");  var a: Int = readLine()!!.toInt()
    print("b의 값: ");  var b: Int = readLine()!!.toInt()
    print("c의 값: ");  var c: Int = readLine()!!.toInt()

    var max: Int = a
    if (b > max) max = b;
    if (c > max) max = c;

    println("최대값은 ${max}입니다.")
}
