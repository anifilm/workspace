package scala.book.chap04

object Ex4 {
  // 리스트 4.1 ChecksumAccumulator 최종 버전
  class ChecksumAccumulator {
    private var sum = 0
    def add(b: Byte): Unit = sum += b
    def checksum(): Int = ~(sum & 0xFF) + 1
  }

  def main(args: Array[String]): Unit = {
    val calc = new ChecksumAccumulator
    calc.add(4)

    println("calc.checksum [" + calc.checksum + "]")
  }
}

/*
ChecksumAccumulator의 add처럼 Unit이 결과 타입인 메서드는 부수 효과를 위해 실행된다.
부수 효과는 일반적으로 해당 메서드 밖에 있는 상태를 변경하거나, I/O를 수행하는 것으로 정의된다.
add의 경우 부수 효과는 sum을 재할당하는 것이다.
부수 효과만을 위해 실행되는 메서드를 프로시저(procedure)라고 부른다.
 */
