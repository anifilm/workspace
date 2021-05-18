package scala.easyplay.chap09

// 코드 9-2 변경 불가능하게 컬렉션 이용하기 2
object Ex_9_2 {
  def main(args: Array[String]): Unit = {
    val list = List(10, 20, 40, 55)
    val result = list.foldLeft(0)((total, item) => total + item)
    println(result)
  }
}
