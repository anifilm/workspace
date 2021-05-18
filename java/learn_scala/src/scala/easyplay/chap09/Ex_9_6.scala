package scala.easyplay.chap09

// 코드 9-6 private 메서드 접근
object Ex_9_6 {
  object Object1 {
    private def ma = {}
    def mb = {}
  }

  object Obejct2 {
  //val a = Object1.ma // 컴파일 에러
    val b = Object1.mb // 정상
  }

  def main(args: Array[String]): Unit = {
    println(Object1.mb)
    println(Obejct2.b)
  }
}
