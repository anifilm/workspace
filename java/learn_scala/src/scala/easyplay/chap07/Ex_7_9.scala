package scala.easyplay.chap07

// 코드 7-9 옵션(Option)의 선언과 활용
object Ex_7_9 {
  def main(args: Array[String]): Unit = {
    val students = Map(
      1 -> "세은이",
      2 -> "정팔이",
      3 -> "정봉이",
    )

    val one = students.get(1)
    val four = students.get(4)

    println(one)
    println(four)
    println(one.get)
    println(four.getOrElse("값이 없습니다."))
  }
}
