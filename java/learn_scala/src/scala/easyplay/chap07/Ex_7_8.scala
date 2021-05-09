package scala.easyplay.chap07

// 코드 7-8 집합(Set), 과일 종류 알아내기
object Ex_7_8 {
  def main(args: Array[String]): Unit = {
    var basket: Set[String] = Set()
    basket += "딸기"
    basket += "포도"
    basket += "포도"
    basket += "사과"
    basket += "포도"
    basket += "바나나"
    println(basket)
  }
}
