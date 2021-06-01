package scala.book.chap04

object Ex1_1 {
  class ChecksumAccumulator {
    var sum = 0
  }

  def main(args: Array[String]): Unit = {
    val acc = new ChecksumAccumulator
    val csa = new ChecksumAccumulator

    acc.sum = 3

    println("acc.sum [" + acc.sum + "]")
    println("csa.sum [" + csa.sum + "]")

  //acc = new ChecksumAccumulator // 오류! acc는 val이기 때문에 재할당 할 수 없다.
  }
}
