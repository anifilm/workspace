package scala.easyplay.chap08

// 코드 8-3 foldLeft() 메서드
object Ex_8_3 {
  def main(args: Array[String]): Unit = {
    val o = List(1, 2, 3, 4)
    // 리스트의 왼쪽 요소부터 차례로 값을 꺼내어 합한 값을 누적한다.
    val n = o.foldLeft(0)((i, j) => i + j)
    println(n) // 10
  }
}
