package scala.easyplay.chap03

// 코드 3-6 do while 루프
object Ex_3_6 {
  def main(args: Array[String]): Unit = {
    var a = 0

    do {
      print(a + ", ")
      a = a + 1
    } while (a < 20)
  }
}
