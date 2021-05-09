package scala.easyplay.chap08

// 코드 8-4 partition() 메서드
object Ex_8_4 {
  def main(args: Array[String]): Unit = {
    val o = List(1, 2, 3, 4)
    // 리스트를 3 미만인 리스트와 3 이상인 리스트로 나눈다.
    val n = o.partition(i => i < 3)
    println(n) // (List(1, 2),List(3, 4))
  }
}
