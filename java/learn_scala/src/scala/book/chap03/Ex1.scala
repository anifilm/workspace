package scala.book.chap03

object Ex1 {
  def main(args: Array[String]): Unit = {
    // 새로운 java.math.BigInteger 인스턴스를 만들고 값 "12345"로 그 인스턴스를 파라미터화한다.
    val big = new java.math.BigInteger("12345")
    println("big [" + (big) + "]")
  }
}
