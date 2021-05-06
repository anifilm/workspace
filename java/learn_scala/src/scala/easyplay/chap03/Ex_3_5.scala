package scala.easyplay.chap03

// 코드 3-5 while 루프
object Ex_3_5 {
  def main(args: Array[String]): Unit = {
    var a = 0

    while (a < 20) {
      print(a + ", ")
      a = a + 1
    }
  }
}
