package scala.easyplay.chap09

// 코드 9-1 변경 불가능하게 컬렉션 이용하기
object Ex_9_1 {
  def main(args: Array[String]): Unit = {
    val list = List(10, 20, 40, 55)

    def foreach(list: List[Int]) = {
      def add(list: List[Int], total: Int): Int = {
        list match {
          case List() => total
          case List(item) => total + item
          case head :: tail => add(tail, total + head)
        }
      }
      add(list, 0)
    }
    println(foreach(list))
  }
}
