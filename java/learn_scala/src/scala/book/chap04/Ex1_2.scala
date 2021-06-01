package scala.book.chap04

object Ex1_2 {
  class ChecksumAccumulator {
    private var sum = 0
  }

  def main(args: Array[String]): Unit = {
    val acc = new ChecksumAccumulator
    val csa = new ChecksumAccumulator

  //acc.sum = 5 // 오류! sum은 private이기 때문에 직접 접근할 수 없다. (수정 불가)

  //println("acc.sum [" + acc.sum + "]") // 오류! sum은 private이기 때문에 직접 접근할 수 없다.
  //println("csa.sum [" + csa.sum + "]")
  }
}

/*
스칼라의 멤버 변수를 공개(public)하려면 어떤 접근 수식자도 지정하지 않으면 된다.
스칼라의 기본 접근 수준은 전체 공개다.
 */
