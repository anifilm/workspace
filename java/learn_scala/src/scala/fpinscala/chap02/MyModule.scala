package scala.fpinscala.chap02

// 목록 2.1 간단한 스칼라 프로그램
// 이것은 주석
/* 이것도 주석 */
/** 문서화 주석 */
object MyModule {
  def abs(n: Int): Int =
    if (n < 0) -n
    else n

  private def formatAbs(x: Int) = {
    val msg = "The absolute value of %d is %d"
    msg.format(x, abs(x))
  }

  def main(args: Array[String]): Unit = {
    println(formatAbs(-42))
  }
}
