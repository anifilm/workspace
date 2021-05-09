package scala.easyplay.chap05

// 코드 5-8 매개변수가 여러 개인 함수
object Ex_5_8 {
  def main(args: Array[String]): Unit = {
    printlnStrings("string1", "string2", "string3")
  }

  def printlnStrings(args: String*) = {
    for (arg <- args) {
      println(arg)
    }
  }
}
