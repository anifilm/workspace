package scala.easyplay.chap03

// 코드 3-2 중괄호를 제외한 if 조건문
object Ex_3_2 {
  def main(args: Array[String]): Unit = {
    var x = 20
    if (x > 15)
      println("15보다 큽니다.")
    else if (x < 15)
      println("15보다 작습니다.")
    else
      println("과연 뭘까요?")
  }
}
