// 변수에 할당하는 람다식 함수 작성하기
package chap03.section3

fun main() {
    var result: Int
    val multi = {x: Int, y: Int -> x * y}   // 일반 변수에 람다식 할당
    result = multi(10, 20)  // 람다식이 할당된 변수는 함수처럼 사용 가능
    println(result)
}

/*

val multi2: (Int, Int) -> Int = {x: Int, y: Int ->
    println("X * y")
    x * y   // 마지막 표현식이 반환됨
}

val multi: (Int, Int) -> Int = {x: Int, y: Int -> x * y}    // 기본 표현
val multi: {x: Int, y: Int -> x * y}    // 선언 자료형 생략
val multi: (Int, Int) -> Int = {x, y -> x * y} // 람다식 매개변수 자료형 생략

val multi = {x, y -> x * y} // 자료형 추론이 불가능하여 오류 발생!

val greet: () -> Unit = {println("Hello World!")}
val square: (Int) -> Int = {x -> x * x}

val nestedLambda: () -> () -> Unit = {{println("nested")}}

// 람다식의 자료형 생략
val greet = {println("Hello World!")}   // 추론 가능
val square = {x: Int -> x * x}  // square의 자료형을 생략하려면 x의 자료형을 명시해야 함

val nestedLambda = {{println("nested")}}  // 추론 가능

 */
