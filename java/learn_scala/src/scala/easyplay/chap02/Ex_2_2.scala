package scala.easyplay.chap02

// 코드 2-2 기본 자료형 변수 코드
object Ex_2_2 {
  def main(args: Array[String]): Unit = {
    var a: Int = 5
    var b = a
    a = 10
    println(a)
    println(b)
  }
}
