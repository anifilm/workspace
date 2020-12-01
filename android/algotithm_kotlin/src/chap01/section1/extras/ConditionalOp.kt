// 자바의 3항 연산자 대신 if~else 사용 방법
package chap01.extras

fun main() {
    // a = (x > y) ? x : y;
    var x = 12; var y = 5
    var a = if (x > y) x else y
    println(a)

    // System.out.println((c == 0) ? "c는 0" : "c는 0이 아님");
    var c = 0
    if (c == 0) println("c는 0") else println("c는 0이 아닙니다.")
}
