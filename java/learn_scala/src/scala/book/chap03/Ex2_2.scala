package scala.book.chap03

object Ex2_2 {
  def main(args: Array[String]): Unit = {
    // 리스트 3.1 배열을 타입으로 파라미터화하기 2

    // 좀 더 명시적으로 코드를 만들고 싶은 기분이라면, 다음과 같이 greetStrings의 타입을 지정할 수도 있다.
    val greetStrings: Array[String] = new Array[String](3)

    // greetStrings 배열의 요소를 초기화
    greetStrings(0) = "Hello"
    greetStrings(1) = ", "
    greetStrings(2) = "world!\n"

    // greetString 배열의 요소를 하나하나 출력하는 for 표현식
    for (i <- 0 to 2)
      print(greetStrings(i))
  }
}
