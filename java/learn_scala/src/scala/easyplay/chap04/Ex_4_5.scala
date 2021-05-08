package scala.easyplay.chap04

// 코드 4-5 트레이트를 상속받아 구현하는 메서드(날아다니는 고래)
object Ex_4_5 {
  def main(args: Array[String]): Unit = {
    val flyingWhale = new Animal
    flyingWhale.swim
    flyingWhale.fly
  }

  class Animal extends Flying with Swimming {}

  trait Swimming {
    def swim = println("수영을 합니다. 촤아~")
  }

  trait Flying {
    def fly = println("납니다. 휘리릭~")
  }

  trait Running {
    def run = println("달립니다. 슈웅~")
  }
}

