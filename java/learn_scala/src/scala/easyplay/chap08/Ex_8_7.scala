package scala.easyplay.chap08

// 코드 8-7 drop()과 dropWhile() 메서드
object Ex_8_7 {
  def main(args: Array[String]): Unit = {
    val o = List(1, 2, 3, 4, 5, 6, 0)

    val n = o.drop(4)
    val nn = o.dropWhile(i => i < 3)

    println(n)  // List(5, 6, 0)
    println(nn) // List(3, 4, 5, 6, 0)
  }
}

// o.drop(4) 앞에서부터 4개의 요소를 버림
// o.dropWhile(i => i < 3) 앞에서부터 조건 검사, 3보다 작은 요소를 버림 같거나 큰 수를 만나면 기능을 멈추고 값을 반환
