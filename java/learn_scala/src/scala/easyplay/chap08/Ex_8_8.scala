package scala.easyplay.chap08

// 코드 8-8 flatten() 메서드
object Ex_8_8 {
  def main(args: Array[String]): Unit = {
    val o = List(List(1, 2, 3, 4), List(5, 6))

    val n = o.flatten
    println(n) // List(1, 2, 3, 4, 5, 6)
  }
}

// 중첩된 리스트를 평평한 리스트로 반환
