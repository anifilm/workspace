package scala.book.chap04

// 리스트 4.1 ChecksumAccumulator 최종 버전
class ChecksumAccumulator {
  private var sum = 0
  def add(b: Byte): Unit = sum += b
  def checksum(): Int = ~(sum & 0xFF) + 1
}

// 리스트 4.2 ChecksumAccumulator 클래스의 동반 객체
import scala.collection.mutable

object ChecksumAccumulator {
  private val cache = mutable.Map.empty[String, Int]

  def calculate(s: String): Int =
    if (cache.contains(s))
      cache(s)
    else {
      val acc = new ChecksumAccumulator
      for (c <- s)
        acc.add(c.toByte)
      val cs = acc.checksum()
      cache += (s -> cs)
      cs
    }
}

/*
싱글톤 객체의 이름이 어떤 클래스와 같을 때, 그 객체를 클래스의 동반 객체(companion object)라고 한다.
단, 클래스와 동반 객체는 반드시 같은 소스 파일 안에 정의해야 한다.
클래스와 동반 객체는 상대방의 private 멤버에 접근할 수 있다.
 */
