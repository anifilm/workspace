package scala.easyplay.chap07

// 코드 7-5 리스트(List)의 메서드
object Ex_7_5 {
  def main(args: Array[String]): Unit = {
    val list1 = "a" :: "b" :: "c" :: Nil
    val list2 = 1 :: 2 :: 3 :: Nil
    val list3 = 2 :: 2 :: 4 :: Nil

    println(list1 ++ list2) // 리스트를 연결(::: 연산자와 같다.)
    println(list1.apply(0)) // 해당 인덱스의 요소를 반환
    println(list1.reverse) // 리스트 요소를 뒤집은 결과를 반환(list1는 변경되지 않는다.)
    println(list2.max) // 요소중 큰 값을 반환
    println(list2.min) // 요소중 작은 값을 반환
    println(list2.sum) // 요소의 합을 반환
    println(list2.mkString(",")) // 리스트의 요소를 구분자로 구분한 문자열을 반환
    println(list2.exists(a => a > 3)) // 3보다 큰 요소가 있는가?
    println(list2.exists(_ > 3))      // 위와 같은 표현
    println(list2.contains(1)) // 해당 요소가 포함되어 있다면 true 반환
    println(list2.isEmpty)  // 리스트가 비어 있다면 true 반환
    println(list3.distinct) // 중복되지 않는 요소만으로 이루어진 리스트를 반환
  }
}
