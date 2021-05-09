package scala.easyplay.chap04

// 코드 4-9 추상 클래스와 트레이트를 상속받아 구현하는 메서드(슈퍼마징가)
object Ex_4_9 {
  def main(args: Array[String]): Unit = {
    val robot = new SuperMazinga
    println(robot.shoot)
  }

  class SuperMazinga extends Robot with M16 with Bazooka with Daepodong

  abstract class Robot {
    def shoot = "뿅뿅"
  }

  trait M16 extends Robot {
    override def shoot = super.shoot + "빵야"
  }

  trait Bazooka extends Robot {
    override def shoot = super.shoot + "뿌왕뿌왕"
  }

  trait Daepodong extends Robot {
    override def shoot = super.shoot + "콰르르르릉"
  }
}
