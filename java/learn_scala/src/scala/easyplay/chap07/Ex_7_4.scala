package scala.easyplay.chap07

// 코드 7-4 ::: 연산자를 이용한 리스트(List) 병합
object Ex_7_4 {
  def main(args: Array[String]): Unit = {
    val list1 = "a" :: "b" :: "c" :: Nil
    val list2 = "d" :: "e" :: Nil
    val list = list1 ::: list2

    for (x <- 0 until list.size)
      println(list(x))
  }
}

/*

List.concat() 메서드와 동일

List.::: 와 같이 사용 가능

 */
