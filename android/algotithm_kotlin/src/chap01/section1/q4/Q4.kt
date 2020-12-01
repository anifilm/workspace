/* Q4
세값의 대소 관계 13종류의 모든 조합에 대해 중앙값을 구하여 출력하는 프로그램을 작성하세요.
 */
package chap01.q4

fun med3(a: Int, b: Int, c: Int): Int {
    if (a >= b)
        if (b >= c)
            return b;
        else if (a <= c)
            return a;
        else
            return c;
    else if (a > c)
        return a;
    else if (b > c)
        return c;
    else
        return b;
}

fun main() {
    println("세 정수의 중앙값을 구합니다.")
    print("a의 값: ");    var a: Int = readLine()!!.toInt()
    print("b의 값: ");    var b: Int = readLine()!!.toInt()
    print("c의 값: ");    var c: Int = readLine()!!.toInt()
    println("중앙값은 ${med3(a, b, c)}입니다.")
}
