package scala.easyplay.chap08

// 코드 8-6 find() 메서드
object Ex_8_6 {
  def main(args: Array[String]): Unit = {
    val o = List(1, 2, 3, 4)

    val n = o.find(i => i >= 2)
    val nn = o.find(i => i == 9)

    println(n)  // Some(2)
    println(nn) // None
  }
}

// find() 메서드는 조건을 충족하는 맨 첫 번째 요소만 가져온다.
