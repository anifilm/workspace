// 클래스 정의
class User
val user1 = new User

class Point(var x: Int, var y: Int) {
  def move(dx: Int, dy: Int): Unit = {
    x = x + dx
    y = y + dy
  }
  override def toString: String =
    s"($x, $y)"
}

val point1 = new Point(2, 3)
point1.x // 2
println(point1) // (2, 3)

// 생성자
class Point(var x: Int = 0, var y: Int = 0)

val origin = new Point
val point1 = new Point(1)
println(point1.x) // 1

val point2 = new Point(y = 2)
println(point2.y) // 2

// Private 멤버와 Getter/Setter 문법
class Point {
  private var _x = 0
  private var _y = 0
  private val bound = 100

  def x = _x
  def x_= (newValue: Int): Unit = {
    if (newValue < bound) _x = newValue else printWarning
  }

  def y = _y
  def y_= (newValue: Int): Unit = {
    if (newValue < bound) _y = newValue else printWarning
  }

  private def printWarning = println("WARNING: Out of bounds")
}

val point1 = new Point()
point1.x = 99
point1.y = 101 // 경고 출력

class Point(val x: Int, val y: Int)
val point = new Point(1, 2)
//point.x = 3 // 오류! 값 변경 불가

class Point(x: Int, y: Int)
val point = new Point(1, 2)
//point.x // 오류! 값 접근 불가(private)
