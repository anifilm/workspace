package scala.book.chap04

object SemiInference {
  def printProd2(): Unit = {
    val s = "hello"; println(s)
  }

  def check(x: Int): Unit = {
    if (x < 2)
      println("too small")
    else
      println("ok")
  }
}
