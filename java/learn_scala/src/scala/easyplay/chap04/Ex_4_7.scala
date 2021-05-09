package scala.easyplay.chap04

// 코드 4-7 추상 클래스와 트레이트를 상속받아 구현하는 메서드(돼지)
object Ex_4_7 {
  def main(args: Array[String]): Unit = {
    val pig = new Pig
    pig.eat
    pig.shout
    pig.fly
  }

  class Pig extends Animal with Flying with Eating {
    def shout = println("꿀꿀")
    def eat = println("쩝쩝")
  }

  abstract  class Animal {
    def shout
  }

  trait Swimming {
    def swim = println("수영을 합니다. 촤아~")
  }

  trait Flying {
    def fly = println("납니다. 휘리릭~")
  }

  trait Running {
    def run = println("달립니다. 쓔웅~")
  }

  trait Eating {
    def eat
  }
}
