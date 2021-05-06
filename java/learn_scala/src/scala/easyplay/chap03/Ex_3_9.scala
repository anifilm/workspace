package scala.easyplay.chap03

// 코드 3-9 조건이 있는 반복문
object Ex_3_9 {
  def main(args: Array[String]): Unit = {
    for (i <- (1 to 10) if (i % 2 == 0)) {
      println(i)
    }
  }
}
