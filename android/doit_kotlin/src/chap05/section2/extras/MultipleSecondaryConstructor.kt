// 주 생성자가 없고 여러개의 보조 생성자를 가진 클래스
package chap05.section2.multiple

class Bird {
    // 프로퍼티들
    var name: String
    var wing: Int
    var beak: String
    var color: String

    // 부 생성자 1
    constructor(name: String, wing: Int, beak: String, color: String) {
        this.name = name
        this.wing = wing
        this.beak = beak
        this.color = color
    }

    // 부 생성자 2
    constructor(name: String, beak: String) {
        this.name = name
        this.wing = 2
        this.beak = beak
        this.color = "grey"
    }

    // 메서드들
    fun fly() = println("Fly wing: $wing")
    fun sing(vol: Int) = println("Sing vol: $vol")
}

fun main() {
    val coco = Bird("mybird", 2, "short", "blue")
    val mybird2 = Bird("mybird2", "long")

    coco.color = "yellow"
    println("coco.color: ${coco.color}")
    coco.fly()
    coco.sing(3)
}
