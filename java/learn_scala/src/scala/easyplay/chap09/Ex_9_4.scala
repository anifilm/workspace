package scala.easyplay.chap09

// 코드 9-4 사용자 입력과 아이더의 활용
object Ex_9_4 {
  def main(args: Array[String]): Unit = {
    val input = scala.io.StdIn.readLine("값을 입력하세요: ")
    val result: Either[String, Int] = try {
      Right(input.toInt)
    }
    catch {
      case e: Exception => Left(input)
    }
    println(result.getClass)
  }
}
