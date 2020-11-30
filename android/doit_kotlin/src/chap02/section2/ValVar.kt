// val과 var 변수 선언 및 할당하기
package chap02.section2

fun main() {
    val number = 10             // number 변수는 Int형으로 추론
    var language = "English"    // language 변수는 String으로 추론
    val secondNumber: Int = 20  // secondNumber 변수는 자료형을 Int형으로 명시적으로 지정
    language = "Korean"         // var 키워드로 선언한 변수는 값 재할당 가능

    println("number: $number")
    println("language: $language")
    println("secondNumber: $secondNumber")
}

/*

val, var의 차이

코틀린은 자바와는 달리 변수선언시 val과 var를 사용하며 타입선언 없이 바로 값을 할당할 수
있습니다. 물론 타입도 별도 지정이 가능합니다.

val과 var는 변수의 시작을 알리면서 변수가 불변(immutable type)인지 가변(mutable type)
인지를 나타냅니다. 공통적으로 초기화시 값을 할당하지 않는다면 반드시 type을 명시해야 합니다.
하지만 컴파일러가 변수 타입을 추론할 수 있는 경우에는 타입을 생략해도 됩니다.

val (value, immutable type)

val로 지정된 불변 타입 변수는 초기에 값을 할당되면 나중에 값을 변경할 수 없으며 값을 변경하게
되면 컴파일 에러가 발생합니다. 즉, 값을 초기화만 가능하고 변경은 불가합니다.
Java에서는 final과 같다고 볼 수 있습니다.

val은 한번만 초기화 되며 값을 변경할 수 없지만 컴파일러가 코드 문맥을 확인시 val 변수가 한번만
초기화 되는것이 맞다면 개발자가 상황에 따라 val를 여러 값으로 초기화(할당) 할 수 있습니다.
val은 초기화 후 값을 변경이 불가능한 것이 맞습니다.

하지만 변수의 참조가 가리키는 객체의 내부 값은 변경이 가능합니다.

1. val : value의 약어이며 변경 불가능(immutable)한 변수, 초기화만 가능
  val name = "Kotlin"
1-1. 위에서 이미 값이 할당 되었기 때문에 아래 코드처럼 값 할당 불가
  name = "Java"

2. 타입 지정 가능, 다만 1번처럼 컴파일러에서 타입이 추론 가능한 경우 생략 가능
  val name2: String = "Swift"
2-1. 초기화시 값을 할당하지 않을시엔 반드시 타입을 지정해야함
  val name2: String
  name2 = "Swift"

3. 코드 문맥에 따라 val 변수가 1번만 초기화 되는것이 맞다면 여러 값을 초기화(할당) 가능
  val name3: String

  if (isSuccess()) {
    name3 = "Anroid"
  } else {
    name3 = "iOS"
  }
  println("name3 : $name3")

4. 변수의 참조가 가리키는 객체의 내부 값은 변경이 가능
  val nameArray = arrayListOf("Kotlin")
  nameArray.add("Java")
  println("nameArray : $nameArray")

var (variable, mutable type)

var로 지정된 가변 타입 변수는 초기화 후 값을 변경이 가능합니다.
하지만, 다른 타입의 값을 넣을 수는 없습니다.
처음에 String 타입으로 초기화를 한 뒤 Int 타입의 값을 넣을 수는 없습니다.
그렇다고 해당 변수를 뒤에서 Int 타입으로 재정의 한다면 타입 미스매치(Type mismatch)
Error가 발생합니다. 이미 정의된 타입을 변경하려면 자바와 같이 형 변환을 해야합니다.

1. 초기화 후 값 변경 가능
  var name1 = "kotlin"
  name1 = "java"
  println("name1 : $name1") // 출력 : java

2. 초기화 시 타입을 지정 했다면 다른 타입의 값을 넣는 것은 불가능
  var name2 = "kotlin"
  name2 = 77 // Type mismatch 에러 발생

일반적인 이렇습니다만 인터페이스 상에서는 val과 var가 미묘하게 지금까지의 설명과는 조금
다르게 차이가 발생합니다.

출처 : https://velog.io/@jojo_devstory/Kotlin-val-var의-차이점

 */
