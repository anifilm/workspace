package scala.easyplay.chap05

// 코드 5-2 간단한 덧셈을 하는 함수
object Ex_5_2 {
  def main(args: Array[String]): Unit = {
    val result = sum(1, 2)
    println(result)
  }

  def sum(a: Int, b: Int): Int = {
    a + b
  }
  /* 다음과 같이 대괄호를 생략하고 한 줄로도 표현 가능
  def sum(a: Int, b: Int): Int = a + b
   */
}
