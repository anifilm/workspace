// 3개의 정수값을 입력하고 중앙값을 구한 다음 출력합니다.
package chap01

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
