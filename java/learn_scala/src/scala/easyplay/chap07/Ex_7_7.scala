package scala.easyplay.chap07

// 코드 7-7 맵(Map)을 활용한 학생 명부
object Ex_7_7 {
  def main(args: Array[String]): Unit = {
    var student1Ban = Map(
      1 -> "고지용",
      2 -> "김미희",
      3 -> "김만수",
      4 -> "김이브",
      5 -> "이재현",
      6 -> "정민영",
      7 -> "차수홍",
      8 -> "최예림",
      9 -> "최희지",
    )

    student1Ban += (10 -> "전학생") // 전학생의 와서 추가합니다.
    student1Ban -= 9 // 9번 학생이 전학를 가서 삭제합니다.

    // 사람들이 많이 전학을 와서 2반을 생성합니다.
    var student2Ban = Map(
      11 -> "고세용",
      12 -> "권육삼",
      13 -> "김유희",
      14 -> "김삼진",
    )

    // 반을 나누는 건 비효율적이라고 생각해 반을 합칩니다.
    var students = student1Ban ++ student2Ban

    students.foreach(i => print(i))
    // for 형태의 루프도 가능하고,
    // foreach를 지원하는 컬렉션이라면 이렇게도 표현 가능합니다.
    println()

    // 선생님이 갑자기 5번을 발표하라고 부릅니다.
    val callee = 5
    println("여기 " + callee + "번 있어?")

    // 5번이 반에 있는지 확인합니다.
    println(if (students.contains(5)) "여기 있습니다." else "없습니다.")
  }
}
