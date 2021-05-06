package scala.easyplay.chap03

// 코드 3-3 단순 for
object Ex_3_3 {
  def main(args: Array[String]): Unit = {
    for (x <- 1 to 10)
      println("x의 값은 " + x)
  }
}
