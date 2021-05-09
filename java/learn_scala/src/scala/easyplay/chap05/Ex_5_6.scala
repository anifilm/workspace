package scala.easyplay.chap05

// 코드 5-6 val 변수에 함수 넣기
object Ex_5_6 {
  def main(args: Array[String]): Unit = {
    val g = f _
  //val g: (Int => Int) = f // 반환 자료형을 명시적으로 지정
    println(g(1))
  }

  def f(i: Int) = i
//def f = (i: Int) => i // 함수 표현식으로 선언
}
