// in 연산자와 범위 연산자로 조건식 간략하게 만들기
package chap04.section1

fun main() {
    print("Enter the score: ")
    val score = readLine()!!.toDouble() // 콘솔로부터 입력받음
    var grade: Char = 'F'

    // 범위 지정자로 연결된 조건
    if (score >= 90.0) {
        grade = 'A'
    } else if (score in 80.0..89.9) {
        grade = 'B'
    } else if (score in 70.0..79.9) {
        grade = 'C'
    }

    println("Score: $score, Grade: $grade")
}