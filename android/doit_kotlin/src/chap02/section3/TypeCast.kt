// 자료형 변환
package chap02.section3

fun main() {
    val a: Int = 1      // Int형 변수 a를 선언하고 1을 할당
//  val b: Double = a   // 자료형 불일치 오류 발생
//  val c: Int = 1.1    // 자료형 불일치 오류 발생

    val b: Double = a.toDouble()    // 변환 메서드 사용

    val result = 1L + 3 // Long형 + Int형 → result는 Long형
}

/*

코틀린의 명시적 형 변환 메서드

toByte: Byte
toLong: Long
toShort: Short
toInt: Int

toFloat: Float
toDouble: Double
toChar: Char

 */
