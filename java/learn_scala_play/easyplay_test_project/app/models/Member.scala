package models

import java.util.Date
import java.util.Calendar

case class Member(mid: Int, userid: String, password: String, nickname: String, email: String, regdate: Option[Date])

object Member {
  def getList = { // 컨트롤러에 회원목록을 전달하는 함수
    members
  }
  var date = Option.apply(Calendar.getInstance.getTime)
  var members = Set( // 변경활 수 있는 Set 자료형 회원목록
    Member(1, "admin", "1234", "admin", "admin@google.com", date),
    Member(2, "Kim Gyu Bum", "1234", "Tiger2K", "tiger2k@naver.com", date),
    Member(3, "Kim Gyu Tae", "1234", "gyutae", "int@int.com", date),
    Member(4, "gosoo", "1234", "hasoo1007", "ex@exo.com", date)
  )
}
