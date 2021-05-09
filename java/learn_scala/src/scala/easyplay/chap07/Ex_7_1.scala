package scala.easyplay.chap07

// 코드 7-1 간단한 Int형 배열과 String형 배열
object Ex_7_1 {
  def main(args: Array[String]): Unit = {
    val arrayA = Array(1, 2, 3, 4, 5)
    for (x <- arrayA)
      println(x)

    val arrayB = Array("a", "b", "c", "d")
    for (x <- arrayB)
      println(x)
  }
}

/* 빈 배열 생성 방법

- 길이가 10인 빈 배열을 생성 (초기값 0으로 자동 초기화 된다.)
val array: Array[Int] = new Array[Int](10)
var array = new Array[Int](10)

- 배열 생성과 동시 초기화
val array = Array(13, 42, 53, 15, 222)

- 배열 자료에 인덱스로 접근
array(i)

 */
