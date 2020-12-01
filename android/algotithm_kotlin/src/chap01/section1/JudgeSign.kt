package chap01

fun main() {
    print("정수를 입력하세요: ")
    var n: Int = readLine()!!.toInt()
    if (n > 0)
        println("이 수는 양수 입니다.")
    else if (n < 0)
        println("이 수는 음수 입니다.")
    else
        println("이 수는 0 입니다.")
}
