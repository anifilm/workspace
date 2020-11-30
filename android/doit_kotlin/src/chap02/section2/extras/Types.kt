package chap02.section2.extras

fun main() {
    val ch = 'A'    // ch는 Char로 추론
    println(ch + 1) // B
    println('a'.toInt())
    println('A'.toInt())

    val ch2: Char   // 변수를 선언만 한 경우 자료형(Char)을 반드시 명시
//  val chNum: Char = 65    // 오류! 숫자를 사용하여 선언하는 것은 금지

    val kor = '\uD55C'
    println(kor)

    val code: Int = 65
    val chFromCode: Char = code.toChar()    // code에 해당하는 문자를 할당
    println(chFromCode)

    val num01: Byte = 127
    val num02: Short = -32768
    val num03: Int = 2147483647
    val num04: Long = 9223372036854775807

    println("$num01\n$num02\n$num03\n$num04")

    val num05 = 127         // Int로 추론
    val num06 = -32768      // Int로 추론
    val num07 = 2147483647  // Int로 추론
    val num08 = 9223372036854775807 // Long으로 추론
}
