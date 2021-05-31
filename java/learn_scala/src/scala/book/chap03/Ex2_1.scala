package scala.book.chap03

object Ex2_1 {
  def main(args: Array[String]): Unit = {
    // 리스트 3.1 배열을 타입으로 파라미터화하기
    val greetStrings = new Array[String](3)

    greetStrings(0) = "Hello"
    greetStrings(1) = ", "
    greetStrings(2) = "world!\n"

    for (i <- 0 to 2)
      print(greetStrings(i))
  }
}
