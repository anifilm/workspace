package scala.easyplay.chap04

// 코드 4-3 케이스 클래스의 편리함
object Ex_4_3 {
  def main(args: Array[String]): Unit = {
    val apple = Fruit2("사과") // 케이스 클래스는 new를 생략 가능합니다.
    println(apple.name)
  }
}

case class Fruit2(name: String)
