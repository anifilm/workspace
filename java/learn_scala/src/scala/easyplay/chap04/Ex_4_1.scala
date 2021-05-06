package scala.easyplay.chap04

// 코드 4-1 스칼라에서의 클래스 생성 및 인스턴스화
object Ex_4_1 {
  def main(args: Array[String]): Unit = {
    val car = new Vehicle()
    println(car.price)
    println(car.hood)
  }
}

class Vehicle() {
  var price: Int = 100000
  var hood: String = "expensive hood"
}
