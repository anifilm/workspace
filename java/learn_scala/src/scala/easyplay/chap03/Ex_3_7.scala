package scala.easyplay.chap03

// 코드 3-7 전형적인 이중 for 문
object Ex_3_7 {
  def main(args: Array[String]): Unit = {
    for (x <- 2 to 9) {
      for (y <- 1 to 9) {
        println(x + " * " + y + " = " + x * y)
      }
    }
  }
}
