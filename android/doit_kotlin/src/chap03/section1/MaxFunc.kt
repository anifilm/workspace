// 함수의 호출 원리 살펴보기
package chap03.section1

fun main() {        // 최초의 스택 프레임
    val num1 = 10   // 임시 변수 혹은 지역 변수
    val num2 = 3    // 임시 변수 혹은 지역 변수
    val result: Int

    result = max(num1, num2) // 두 번째 스택 프레임
    println(result)
}

fun max(a: Int, b: Int) = if (a > b) a else b // a와 b는 max의 임시 변수

/*

반환값이 없는 함수

fun printSum(a: Int, b: Int): Unit {
    println("sum of $a and $b is ${a + b}")
}

fun printSum(a: Int, b: Int) {
    println("sum of $a and $b is ${a + b}")
}

반환값이 없는 함수는 반환값의 자료형을 Unit으로 지정하거나 생략할 수 있습니다.
반환값이 없는 경우 return문 또한 생략할 수 있습니다.

Unit과 void의 차이점
Unit은 자바의 void형과 대응합니다. 하지만 void는 정말로 아무것도 반환하지 않고
Unit은 특수한 객체를 반환한다는 차이점이 있습니다.

 */
