package scala.easyplay.chap08

// 코드 8-2 filter() 메서드
object Ex_8_2 {
  def main(args: Array[String]): Unit = {
    val o = List(1, 2, 3, 4)
    // i >= 3 인 경우, i * 2를 적용 하겠다.
    val n = o.filter(i => i >= 3).map(i => i * 2)
    println(n) // List(6, 8)
  }
}
