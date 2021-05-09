package scala.easyplay.chap07

// 코드 7-6 맵(Map)의 선언 및 활용
object Ex_7_6 {
  def main(args: Array[String]): Unit = {
    var map = Map(
      "number1" -> "aa",
      "number2" -> "bb",
      "number3" -> 3,
              5 -> "cc"
    )

    println(map.isEmpty)
    println("whole map: " + map)
    println("keys: " + map.keys)
    println("values: " + map.values)

    println(map("number1"))

    // 맵에 요소 추가
    map += ("number5" -> "this is the fifth value")
    // 맵의 요소 삭제
    map -= "number5"
  }
}
