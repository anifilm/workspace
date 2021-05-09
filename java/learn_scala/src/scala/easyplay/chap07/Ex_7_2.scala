package scala.easyplay.chap07

// 코드 7-2 자료형에서 자유로운 배열
object Ex_7_2 {
  def main(args: Array[String]): Unit = {
    val arrayA = Array(13, "hi", 1.42)
    for (x <- arrayA)
      println(x)
  }
}
