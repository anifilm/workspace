package scala.easyplay.chap05

// 코드 5-11 implicit 함수
object Ex_5_11 {
  def main(args: Array[String]): Unit = {
    implicit def doubleToInt(d: Double) = d.toInt
    val x: Int = 18.0
    println(x)
  }
}
