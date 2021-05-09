package scala.easyplay.chap05

// 코드 5-9 매개변수에 기본값을 지정
object Ex_5_9 {
  def main(args: Array[String]): Unit = {
    println("기본값은 " + default())
  }

  def default(a: Int = 4, b: Int = 5) = a + b
}
