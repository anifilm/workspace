package scala.easyplay.chap07

// 코드 7-10 Iterator의 선언과 활용
object Ex_7_10 {
  def main(args: Array[String]): Unit = {
    val list = List("a", "b", "c")
    val i = list.iterator
    while (i.hasNext)
      println(i.next)
  }
}
