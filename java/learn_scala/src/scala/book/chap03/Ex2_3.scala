package scala.book.chap03

object Ex2_3 {
  def main(args: Array[String]): Unit = {
    // 리스트 3.1 배열을 타입으로 파라미터화하기 3

    // 따라서 다음 코드는 Ex2_2의 코드와 의미상 동일하다.
    val greetStrings: Array[String] = new Array[String](3)

    greetStrings.update(0, "Hello")
    greetStrings.update(1, ", ")
    greetStrings.update(2, "world!\n")

    for (i <- (0).to(2))
      print(greetStrings.apply(i))
  }
}
