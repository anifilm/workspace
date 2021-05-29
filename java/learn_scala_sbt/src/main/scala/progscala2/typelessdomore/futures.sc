import scala.concurrent.Future
import scala.concurrent.ExecutionContext.Implicits.global

def sleep(millis: Long) = {
  Thread.sleep(millis)
}

// 쓸모는 없는데 바쁜 일 ;)
def doWork(index: Int) = {
  sleep((math.random * 1000).toLong)
  index
}

(1 to 5) foreach { index =>
  val future = Future {
    doWork(index)
  }
  future onSuccess {
    case answer: Int => println(s"Success! returned: $answer")
  }
  future onFailure {
    case th: Throwable => println(s"FAILURE! returned: $th")
  }
}

sleep(1000) // '작업'이 끝날 때까지 충분히 기다린다.
println("Finito!")

// 2.11.x 버전에서 작성된 파일
// (2.13.x 버전) scala.bat 파일명으로 실행불가
