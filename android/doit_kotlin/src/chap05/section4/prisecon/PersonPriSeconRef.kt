// 주 생성자와 부 생성자 함께 사용하기
package chap05.section4.prisecon

class Person(firstName: String,
            out: Unit = println("[Primary Constructor] Parameter")) {   // 주 생성자
    val fName = println("[Property] Person fName: $firstName")  // 프로퍼티 할당
    init {
        println("[init] Person init block") // 초기화 블록
    }
    // 부 생성자
    constructor(firstName: String, age: Int,
            out: Unit = println("[Secondary Constructor] Parameter")): this(firstName) {
        println("[Secondary Constructor] Body: $firstName, $age")   // 부 생성자 본문
    }
}

fun main() {
    val p1 = Person("Chaeyoung", 43)
    println()
    val p2 = Person("Hungkyu")
}
