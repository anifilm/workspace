package scala.book.chap04

object Ex2 {
  class ChecksumAccumulator {
    private var sum = 0

    def add(b: Byte): Unit = {
    //b = 1 // 매개변수 b는 val이므로 재할당 할 수 없다.
      sum += b
    }

    def checksum(): Int = {
      return ~(sum & 0xFF) + 1
    }
  }

  def main(args: Array[String]): Unit = {
    val calc = new ChecksumAccumulator
    calc.add(2)

    println("calc.checksum [" + calc.checksum + "]")
  }
}
