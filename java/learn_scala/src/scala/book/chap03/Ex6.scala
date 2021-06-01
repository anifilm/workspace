package scala.book.chap03

object Ex6 {
  def main(args: Array[String]): Unit = {
    // 리스트 3.7 변경 가능한 맵을 만들고, 초기화하고, 사용하기
    import scala.collection.mutable

    val treasureMap = mutable.Map[Int, String]()
    treasureMap += (1 -> "Go to island.")
    treasureMap += (2 -> "Find big X on ground.")
    treasureMap += (3 -> "Dig.")
    println(treasureMap(2))

    // 리스트 3.8 변경 불가능한 맵을 만들고, 초기화하고, 사용하기
    val romanNumeral = Map(
      1 -> "I", 2 -> "II", 3 -> "III", 4 -> "IV", 5 -> "V"
    )
    println(romanNumeral(4))
  }
}
