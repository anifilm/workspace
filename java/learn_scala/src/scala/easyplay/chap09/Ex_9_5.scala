package scala.easyplay.chap09

import java.io.{ File, PrintWriter }
import scala.io.StdIn.readLine

// 코드 9-5 파일 출력
object Ex_9_5 {
  def main(args: Array[String]): Unit = {
    var fileName = "Ex_9_4_result.txt"
    var input = readLine("파일에 쓸 내용을 입력하세요: ")

    val writer = new PrintWriter(new File(fileName))
    writer.write(input)
    writer.close()

    // 출력 파일은 패키지 디렉터리에 생성됩니다.
    println("입력하신 " + input + " 텍스트를 " + fileName + "에 저장했습니다.")
  }
}
