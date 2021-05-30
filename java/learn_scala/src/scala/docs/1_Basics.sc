// 표현식
1 + 1

println(1)
println(1 + 1)
println("Hello!")
println("Hello," + " world")

// 값
val x = 1 + 1

//x = 3 // 상수 선언된 변수에 값을 재할당 할 수 없다.

val x: Int = 1 + 1

// 변수
var x = 1 + 1
x = 3
println(x * x)

var x: Int = 1 + 1

// 블록
println({
  val x = 1 + 1
  x + 1
}) // 3

// 함수
(x: Int) => x + 1

val addOne = (x: Int) => x + 1
println(addOne(1)) // 2

val add = (x: Int, y: Int) => x + y
println(add(1, 2)) // 3

val getTheAnswer = () => 42
println(getTheAnswer()) // 42

// 메서드
def add(x: Int, y: Int): Int = x + y
println(add(1, 2)) // 3

def addThenMultiply(x: Int, y: Int)(multiplier: Int): Int = (x + y) * multiplier
println(addThenMultiply(1, 2)(3)) // 9

def name: String = System.getProperty("user.name")
println("Hello, " + name + "!")

def getSquareString(input: Double): String = {
  val square = input * input
  square.toString
}
println(getSquareString(2.5)) // 6.25

// 클래스
class Greeter(prefix: String, suffix: String) {
  def greet(name: String): Unit =
    println(prefix + name + suffix)
}

val greeter = new Greeter("Hello, ", "!")
greeter.greet("Scala developer") // Hello, Scala devleoper!

// 케이스 클래스
case class Point(x: Int, y: Int)

val point = Point(1, 2)
val anotherPoint = Point(1, 2)
val yetAnotherPoint = Point(2, 2)

if (point == anotherPoint) {
  println(point + " and " + anotherPoint + " are the same.")
} else {
  println(point + " and " + anotherPoint + " are different.")
} // Point(1,2) and Point(1,2) are the same.

if (point == yetAnotherPoint) {
  println(point + " and " + yetAnotherPoint + " are the same.")
} else {
  println(point + " and " + yetAnotherPoint + " are different.")
} // Point(1,2) and Point(2,2) are different.

// 객체
object IdFactory {
  private var counter = 0
  def create(): Int = {
    counter += 1
    counter
  }
}

val newId: Int = IdFactory.create()
println(newId) // 1
val newerId: Int = IdFactory.create()
println(newerId) // 2

// 트레이트
trait Greeter {
  def greet(name: String): Unit
}

trait Greeter {
  def greet(name: String): Unit =
    println("Hello, " + name + "!")
}

class DefaultGreeter extends Greeter

class CustomizableGreeter(prefix: String, postfix: String) extends Greeter {
  override def greet(name: String): Unit = {
    println(prefix + name + postfix)
  }
}

val greeter = new DefaultGreeter()
greeter.greet("Scala developer") // Hello, Scala developer!

val customGreeter = new CustomizableGreeter("How are you, ", "?")
customGreeter.greet("Scala developer") // How are you, Scala developer?

// 메임 메서드
object Main {
  def main(args: Array[String]): Unit =
    println("Hello, Scala developer!")
}
