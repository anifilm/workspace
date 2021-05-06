package scala.easyplay.chap02

// 코드 2-1 final 속성을 가진 val 변수
object Ex_2_1 {
  def main(args: Array[String]): Unit = {
    var a = "변수입니다."
    val b = "final 변수입니다."
    a = "바꿀 수 있을까요?"
    //b = "바꿀 수 있을까요?"
    println(a)
    println(b)
  }
}
