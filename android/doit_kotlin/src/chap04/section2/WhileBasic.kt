// while문
package chap04.section2

fun main() {
    var i = 1
    while (i <= 5) {
        println(i)
        i++ // 계속 반복하다 보면 조건식의 i 값이 5를 넘어갈 때 false가 되어 탈출
    }
}

/*

while (조건식) {   // 조건식이 true인 동안 본문을 무한 반복
    본문
    ....
}

 */