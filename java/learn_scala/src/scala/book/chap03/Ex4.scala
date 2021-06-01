package scala.book.chap03

object Ex4 {
  def main(args: Array[String]): Unit = {
    // 리스트 3.3 리스트를 만들고 초기화하기
    val oneTwoThree = List(1, 2, 3)

  {
    val oneTwo = List(1, 2)
    val threeFour = List(3, 4)
    val oneTwoThreeFour = oneTwo ::: threeFour

    println(oneTwo + " and " + threeFour + " were not mutated.")
    println("Thus, " + oneTwoThreeFour + " is a new list")
  }
  {
    val twoThree = List(2, 3)
    val oneTwoThree = 1 :: twoThree

    println(oneTwoThree) // List(1, 2, 3)
  }
  {
    val oneTwoThree = 1 :: 2 :: 3 :: Nil
    println(oneTwoThree) // List(1, 2, 3)
  }

  }
}

/*
스칼라는 같은 타입의 객체로 이뤄진 변경 불가능한 시퀀스를 만들기 위해서 List 클래스를 사용할 수 있다.
배열과 마찬가지로 List[String]에는 문자열만 들어갈 수 있다.
스칼라의 리스트인 scala.List는 변경 불가능하다는 점에서 자바의 java.uril.List 타입과 다르다.
스칼라의 리스트는 함수 스타일의 프로그래밍을 위해 설계한 클래스다.

리스트의 내용을 변경하는 것 같아 보이는 메서드를 호출하면, 리스트 자체를 변경하지 않고
새 값을 갖는 리스트를 새로 만들어서 반환한다.
위와 같이 리스트에 ':::'라는 메서드를 사용하면 두 리스트를 이어붙인 새로운 리스트가 반환된다.

리스트에서 가장 자주 사용하는 연산자는 '::'(콘즈 cons) 이다.
콘즈는 새 요소를 기존 리스트의 맨 앞에 추가한 새로운 리스트를 반환한다.
 */
