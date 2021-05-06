package scala.easyplay.chap04

// 코드 4-2 일반적인 스칼라 클래스 생성법
object Ex_4_2 {
  def main(args: Array[String]): Unit = {
    val apple = new Fruit("사과")
    println(apple.name)
  }
}

class Fruit(input: String) {
  var name = input
}
