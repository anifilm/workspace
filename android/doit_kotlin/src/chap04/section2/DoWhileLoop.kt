// do~while문 사용해 보기
package chap04.section2

fun main() {
     do {
         print("Enter an integer: ")
         val input = readLine()!!.toInt()

         for (i in 0..(input - 1)) {
            for (j in 0..(input - 1)) print((i + j) % input + 1)
            println()
        }
    } while (input != 0)
}

/*

do {
    본문
    ....
} while (조건식)

 */
