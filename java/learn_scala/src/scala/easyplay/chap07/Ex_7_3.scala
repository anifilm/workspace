package scala.easyplay.chap07

// 코드 7-3 :: 연산자를 이용한 리스트(List) 생성과 출력
object Ex_7_3 {
  def main(args: Array[String]): Unit = {
    val list = "a" :: "b" :: "c" :: Nil
    for (x <- 0 until list.size)
      println(list(x))
  }
}

/* 빈 리스트 생성 방법

val list = List()

- String 자료형 리스트 생성
val list: List[String] = List("a", "b", "c")
val list =  = List("a", "b", "c") // 자료형 생략 가능

- Int 자료형 리스트 생성
val list: List[Int] = List(12, 42, 44)
val list = List(12, 42, 44) // 자료형 생략 가능

- 리스트 자료에 인덱스로 접근
list(i)

- 리스트 자료 연결을 통한 생성
val list = "a" :: "b" :: "c" :: Nil
val list = List("a", "c", "c") 와 동일

- 빈 리스트 생성, 두 번째
val list2: List[Int] = Nil
val list2: List[Int] = List() 와 동일

 */
