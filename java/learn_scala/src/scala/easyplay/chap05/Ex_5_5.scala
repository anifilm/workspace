package scala.easyplay.chap05

// 코드 5-5 매개변수에 기본값을 설정
object Ex_5_5 {
  def main(args: Array[String]): Unit = {
    val thisYear = 2016

    // 아직 인수가 존재하지 않지만,
    // _ 와일드카드를 사용해 어느 String 값이든 들어올 수 있다고 선언
    // 함수의 일부 인수를 고정(부분 적용 함수)
    var fixedValueFunction = go(thisYear, _: String)

    // go()가 아니라 fixedValueFunction 형태로 호출
    fixedValueFunction("test1")
    fixedValueFunction("test2")
    fixedValueFunction("test3")
  }

  def go(thisYear: Int, string: String) = {
    println(string + ": " + thisYear)
  }
}

