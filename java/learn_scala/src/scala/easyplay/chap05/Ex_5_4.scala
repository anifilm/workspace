package scala.easyplay.chap05

// 코드 5-4 => 형식의 함수를 이용한 코드(Call-by-name, 이름을 통한 호출)
object Ex_5_4 {
  def main(args: Array[String]): Unit = {
    dropship(people(5))
  }

  def people(n: Int) = {
    println("탑승수속을 시작합니다.")
    n
  }

  def dropship(n: => Int) = {
    println("드랍쉽 준비합니다.")
    println(n + "명 탑승했습니다.")
  }
}

/*
dropship(n: => Int)와 같이 함수 선언시
dropship() 함수를 먼저 평가하여 실행하고 인수 n에 관하여 필요시 인수로 전달된 people(5) 함수
(객체로 평가)를 실행하여 반환값을 전달한다.
dropship() 실행 -> n 값 필요시 -> people(5) 실행 반환값 전달 -> n 값 출력 순으로 실행된다.

결론적으로 Call-by_name이라는 것은 함수 자체를 부른다는 뜻이다.
 */
