/* Q5
중앙값을 구하는 메서드는 다음과 같이 작성할 수도 있습니다. 그러나 실습 1C-1의
med3 메서드에 비해 효율이 떨어지는데, 그 이유를 설명하세요.
 */
package chap01.q5

fun med3(a: Int, b: Int, c: Int): Int {
    if ((b >= a && c <= a) || (b <= a && c >= a))
        return a;
    else if ((a > b && c < b) || (a < b && c > b))
        return b;
    return c;
}

fun main() {
    println("세 정수의 중앙값을 구합니다.")
    print("a의 값: ");    var a: Int = readLine()!!.toInt()
    print("b의 값: ");    var b: Int = readLine()!!.toInt()
    print("c의 값: ");    var c: Int = readLine()!!.toInt()
    println("중앙값은 ${med3(a, b, c)}입니다.")
}
