// 스마트 캐스트 사용해 보기
package chap02.section3

fun main() {
    var test: Number = 12.2 // 12.2에 의해 test는 Float형으로 스마트 캐스트
    println("$test")

    test = 12       // Int형으로 스마트 캐스트
    println("$test")

    test = 120L     // Long형으로 스마트 캐스트
    println("$test")

    test += 12.0f   // Float형으로 스마트 캐스트
    println("$test")
}

/*

스마트 캐스트가 적용되는 자료형은 Number형이 있습니다.
Number형을 사용하면 숫자를 저장하기 위한 특수한 자료형 객체를 만듭니다.
Number형으로 정의된 변수에는 저장되는 값에 따라 정수형이나 실수형 등으로 자료형이
변환됩니다.

 */
