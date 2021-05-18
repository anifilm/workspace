package scala.easyplay.chap10

// 코드 10-3 Seq 기능으로 볼카운트 반복문 구현하기
object Ex_10_3 {
  def calcBallCountSeq(ballList: Seq[Int], inputList: Seq[Int]): BallCount = {
    var strikes = 0;
    var balls = 0;
    var outs = 0;

    for (i <- 0 until ballList.length) {
      if (ballList(i) == inputList(i)) strikes = strikes + 1
      else if (inputList.contains(ballList(i))) balls = balls + 1
    }
    BallCount(strikes, balls, outs)
  }

  case class BallCount(strikes: Int, balls: Int, outs: Int)
}
