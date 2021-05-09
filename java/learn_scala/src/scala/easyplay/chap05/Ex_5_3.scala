package scala.easyplay.chap05

// 코드 5-3 드랍쉽에 사람을 태우는 코드(Call-by-value, 값으로 호출)
object Ex_5_3 {
  def main(args: Array[String]): Unit = {
    dropship(people(5))
  }

  def people(n: Int) = {
    println("탑승수속을 시작합니다.")
    n
  }

  def dropship(n: Int) = {
    println("드랍쉽 준비합니다.")
    println(n + "명 탑승했습니다.")
  }
}

/*
dropship() 함수를 people(5) 함수를 인수로 하여 호출한다.
people(5)를 먼저 평가하여 실행하고 반환값을 dropship(return value n)으로 호출한다.
 */
