package scala.book.chap03

object Ex3 {
  def main(args: Array[String]): Unit = {
    // 리스트 3.2 배열을 만들고 초기화하기

    // 3개의 요소가 있는 배열을 생성, 배열의 타입을 Array[String]으로 추론
    val numNames = Array("zero", "one", "two")

    // apply를 호출하는 더 장황한 방법
    val numNames2 = Array.apply("zero", "one", "two")
  }
}

/*
스칼라의 배열은 모든 요소의 타입이 같은 객체로 이뤄진 변경 가능한 시퀀스다.
배열을 생성한 다음 그 길이를 변경할 수 없지만, 요소는 변경할 수 있다.
따라서 배열은 변경 가능한 객체다.
 */
