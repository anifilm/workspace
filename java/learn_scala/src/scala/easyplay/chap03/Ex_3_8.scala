package scala.easyplay.chap03

// 코드 3-8 스칼라식 이중 for 문
object Ex_3_8 {
  def main(args: Array[String]): Unit = {
    for (x <- 2 to 9; y <- 1 to 9) {
      println(x + " * " + y + " = " + x * y)
    }
  }
}
