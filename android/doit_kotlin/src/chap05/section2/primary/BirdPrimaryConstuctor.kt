// 주 생성자를 사용하는 Bird 클래스
package chap05.section2.primary

/* (1) 주 생성자 선언
class Bird constructor(_name: String, _wing: Int, _beak: String, _color: String) {
    // 프로퍼티
    var name: String = _name
    var wing: Int = _wing
    var beak: String = _beak
    var color: String = _color
 */

// (2) 주 생성자 선언 생략된 표현 (프로퍼티를 포함한 주 생성자)
class Bird(var name: String, var wing: Int, var beak: String, var color: String) {
    // 프로퍼티
    // 매개 변수내에 프로퍼티로서 선언되어 본문에서 생략됨

    // 메서드
    fun fly() = println("Fly wing: $wing")
    fun sing(vol: Int) = println("Sing vol: $vol")
}

fun main() {
    val coco = Bird("mybird", 2, "short", "blue")   // 생성자의 인자로 객체를 생성과 동시에 초기화

    coco.color = "yellow"
    println("coco.color: ${coco.color}")
    coco.fly()
    coco.sing(3)
}
