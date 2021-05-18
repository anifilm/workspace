package scala.easyplay.chap10

import scala.io.StdIn.readLine
import scala.util.Random

import Ex_10_1.convertInputs
import Ex_10_3.calcBallCountSeq
import Ex_10_3.BallCount

// 코드 10-4 숫자야구 전체 코드
object Ex_10_4 {
  def main(args: Array[String]): Unit = {
    println("숫자야구 게임을 시작합니다.")
    val ballList = Random.shuffle(1 to 9).drop(6)

    while (true) {
      print("숫자를 세 자리를 입력하세요: ")
      val inputList = convertInputs(readLine)

      if (inputList != None) {
        val ballCount = calcBallCountSeq(ballList, inputList.get)

        ballCount match {
          case BallCount(0, 0, 0) =>
            println("아웃!")
          case BallCount(3,0,0) =>
            println("3 스트라이크! 프로그램을 종료합니다."); System.exit(0)
          case BallCount(strike, 0, 0) =>
            println(s"$strike 스크라이크!")
          case BallCount(0, ball, 0) =>
            println(s"$ball 볼!")
          case BallCount(strike, ball, 0) =>
            println(s"$strike 스트라이크, $ball 볼")
          case _ =>
            println("처리 불가")
        }
      } else {
        println("제대로 된 값을 입력하세요.")
      } // of if-else
    } // of while
  } // of def
} // of object
