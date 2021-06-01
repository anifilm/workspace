package scala.book.chap03

object Ex5 {
  def main(args: Array[String]): Unit = {
    // 리스트 3.5 변경 불가능한 집합을 만들고, 초기화하고, 사용하기
    var jetSet = Set("Boeing", "Airbus")
    jetSet += "Lear" // 세 요소가 들어 있는 집합으로 재할당, 변경 불가능한 집합이지만 재할당으로 변경이 되었다. (var 변수 선언)
    println(jetSet.contains("Cessna")) // false

    //jetSet = jetSet + "Lear"
    println("jetSet [" + (jetSet) + "]")

    // 리스트 3.6 변경 가능한 집합을 만들고 초기화하고, 사용하기
    import scala.collection.mutable

    val movieSet = mutable.Set("Hitch", "Poltergeist")
    movieSet += "Shrek" // 기존 집합에 "Shrek" 요소를 추가, 재할당 아님 (val 값 선언)
    println(movieSet)

    // 변경 불가능한 HashSet 사용
    import scala.collection.immutable.HashSet

    val hashSet = HashSet("Tomatoes", "Chilies")
    println(hashSet + "Coriander")
  }
}
