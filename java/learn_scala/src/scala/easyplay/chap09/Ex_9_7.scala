package scala.easyplay.chap09

// 코드 9-7 동반객체
object Ex_9_7 {
  object Companion {
    private def ma = {}
    def mb = {}
  }

  class Companion {
    val a = Companion.ma // 정상
    val b = Companion.mb // 정상
  }

  def main(args: Array[String]): Unit = {
    println(Companion.mb)
  }
}
