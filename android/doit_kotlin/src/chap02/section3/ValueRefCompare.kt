// 이중 등호 비교와 삼중 등호 비교 사용하기
package chap02.section3

fun main() {
    val a: Int = 128
    val b = a

    println(a === b)    // true 자료형이 기본형인 int형이 되어 값이 같다

    val c: Int? = a
    val d: Int? = a
    val e: Int? = c

    println(c == d)     // true 값의 내용만 비교하는 경우 동일
    println(c === d)    // false 값의 내용은 같지만 참조 주소를 비교해 다른 객체 (주소 다름)
    println(c === e)    // true 값의 내용도 같고 참조된 객체도 동일 (주소 동일)
}

/*

값을 비교할 때는 이중 등호 (==)를 사용
참조 주소를 비교하려면 삼중 등호 (===)를 사용합니다.

 */
