package scala.easyplay.chap08

// 코드 8-1 map() 메서드
object Ex_8_1 {
  def main(args: Array[String]): Unit = {
    val o = List(1, 2, 3, 4)
    println(o)
    val n = o.map(i => i * 10) // o.map(_ * 10)으로 바꿔 쓸 수 있다.
    println(n)

  //o.foreach(i => i * 10) // 값을 직접 변경하는 부수효과가 있는 foreach 메서드
  //println(o)
  }
}
