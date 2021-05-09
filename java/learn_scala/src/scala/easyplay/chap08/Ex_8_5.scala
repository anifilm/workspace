package scala.easyplay.chap08

// 코드 8-5 zip() 메서드
object Ex_8_5 {
  def main(args: Array[String]): Unit = {
    val o = List(1, 2, 3, 4)
    val oo = List(5, 6, 7, 8, 9)
    println(oo)

    val n = o zip oo
    val nn = o ::: oo

    println(n)  // List((1,5), (2,6), (3,7), (4,8))
    println(nn) // List(1, 2, 3, 4, 5, 6, 7, 8, 9)
  }
}

/*

zip() 메서드는 첫 번째 리스트와 두 번째 리스트를 튜플 형태로 묶어 튜플로 이루어진 리스트를 반환
쌍을 맞춰주어야 하기 때문에 짝이 안 맞는 부분은 버려진다.

::: 사용한 경우는 여러 개의 요소가 그대로 담긴 평평한 리스트를 반환

 */
