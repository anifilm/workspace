// 이너 클래스에서 바깥 클래스 접근하기
package chap05.section4.innerref

open class Base {
    open val x: Int = 1
    open fun f() = println("Base Class f()")
}

class Child : Base() {
    override val x: Int = super.x + 1
    override fun f() = println("Child Class f()")
    // 이너 클래스
    inner class Inside {
        fun f() = println("Inside Class f()")
        fun test() {
            f() // 현재 이너 클래스의 f() 접근
            Child().f() // 바로 바깥 클래스 f() 접근
            super@Child.f() // Child의 상위 클래스인 Base 클래스의 f() 접근
            println("[Inside] super@Child.x: ${super@Child.x}") // Base의 x 접근
        }
    }
}

fun main() {
    val c1 = Child()
    c1.Inside().test()  // 이너 클래스 Inside의 메서드 test() 실행
}
