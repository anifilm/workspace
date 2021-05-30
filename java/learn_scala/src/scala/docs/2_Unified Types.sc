// 스칼라 타입 계층구조
val list: List[Any] = List(
  "a string",
  732, // 정수 값
  'c', // 문자 값
  true, // boolean 값
  () => "an anonymous function returning a string"
)

list.foreach(element => println(element))

// 타입 캐스팅
val x: Long = 987654321
val y: Float = x // 9.8765434E8 (이 경우 일부 자리수가 소실되었음을 주의)

val face: Char = '☺'
val number: Int = face // 9786

val x: Long = 987654321
val y: Float = x  // 9.8765434E8
//val z: Long = y // 적합하지 않음(캐스팅 불가)
