// 1부터 10까지 더하기
package chap04.section2

fun main() {
    var sum = 0

    for (i in 1..10) sum += i
    println("sum: $sum")
}

/*

하행, 상행 및 다양한 반복 방법

for (i in 5..1) print(i) // 잘못된 방법, 역순으로 적으면 아무것도 출력되지 않음

// 숫자 역순출력, 범위 연산자 대신 downTo 키워드를 사용
for (i in 5 downTo 1) print(i)

// 숫자를 2단계씩 증가하게 하려면 step 키워드를 사용
for (i in 1..5 step 2) print(i)

// downTo 키워드와 step 키워드를 혼합해서 사용
for (i in 5 downTo 1 step 2) print(i)

 */
