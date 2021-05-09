package scala.easyplay.chap05

// 코드 5-1 반환 자료형을 명시적으로 선언하지 않은 함수
object Ex_5_1 {
  def main(args: Array[String]): Unit = {
    println("반환받은 값: " + name())
  }

  def name() = {
    val a = 10
    a
  }
  /*
  def name(): Int = {
    val a = 10
    return a // 명시적 return 사용시 반환 자료형을 명시해야 한다.
  } */
}
