package scala.book.chap03

object Ex7 {
  def main(args: Array[String]): Unit = {
    // 3.5 11단계: 함수형 스타일을 인식하는 법을 배우자

    // 다음 예제에는 var가 있기 때문에 명령형 스타일이다.
    def printArgs(args: Array[String]): Unit = {
      var i = 0
      while (i < args.length) {
        println(args(i))
        i += 1
      }
    }
    printArgs(Array("zero", "one", "two"))

    // 위 코드를 var를 없애고 더 함수적으로 만들 수 있다.
  {
    def printArgs(args: Array[String]): Unit = {
      for (arg <- args)
        println(arg)
    }
    printArgs(Array("three", "four", "five"))
  }
    // 또는 다음과 같이 할 수도 있다.
  {
    def printArgs(args: Array[String]): Unit = {
      args.foreach(println)
    }
    printArgs(Array("six", "seven", "eight"))
  }

    // 리스트 3.9 var나 부수 효과가 없는 함수
    def formatArgs(args: Array[String]) = args.mkString("\n")

    val args = Array("nine", "ten")
    println(formatArgs(args))

    val res = formatArgs(Array("zero", "one", "two"))
    assert(res == "zero\none\ntwo")
    println("whew")
  }
}
