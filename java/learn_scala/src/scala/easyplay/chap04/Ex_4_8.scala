package scala.easyplay.chap04

// 코드 4-8 추상 클래스와 트레이트를 상속받아 구현하는 메서드(마징가)
object Ex_4_8 {
  def main(args: Array[String]): Unit = {
    val robot = new Mazinga
    println(robot.shoot)
  }

  class Mazinga extends Robot with M16 with Bazooka with Daepodong

  abstract class Robot {
    def shoot = "뿅뿅"
  }

  trait M16 extends Robot {
    override def shoot = "빵야"
  }

  trait Bazooka extends Robot {
    override def shoot = "뿌왕뿌왕"
  }

  trait Daepodong extends Robot {
    override def shoot = "콰르르르릉"
  }
}
