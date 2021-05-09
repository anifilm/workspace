package scala.easyplay.chap06

// 코드 6-3 긴급전화와 일반전화를 구별해서 로직을 수행하는 패턴 매칭
object Ex_6_3 {
  def main(args: Array[String]): Unit = {
    val number1 = "010-222-2222"
    val number2 = "119"
    val number3 = "포도먹은돼지"
    val numberList = List(number1, number2, number3)

    for (number <- numberList) {
      number match {
        case Emergency() => println("긴급전화입니다.")
        case Normal(number) => println("일반전화입니다. - " + number)
        case _ => println("판단할 수 없습니다.")
      }
    }
  }

  object Emergency {
    def unapply(number: String): Boolean = {
      if (number.length == 3 && number.forall(_.isDigit)) true
      else false
    }
  }

  object Normal {
    def unapply(number: String): Option[Int] = {
      try {
        var o = number.replaceAll("-", "")
        Some(number.replaceAll("-", "").toInt)
      } catch {
        case _: Throwable => None
      }
    }
  }
}
