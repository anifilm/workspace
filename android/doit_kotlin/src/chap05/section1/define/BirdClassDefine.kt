// Bird 클래스 만들어 보기
package chap05.section1.define

// 클래스의 정의
class Bird {
    // 프로퍼티 (속성)
    var name: String = "mybird"
    var wing: Int = 2
    var beak: String = "short"
    var color: String = "blue"

    // 메서드 (함수)
    fun fly() = println("Fly wing: $wing")
    fun sing(vol: Int) = println("Sing vol: $vol")
}

fun main() {
    val coco = Bird()   // 클래스의 생성자를 통한 객체의 생성
    coco.color = "blue" // 객체읜 프로퍼티에 값 할당

    println("coco.color: ${coco.color}")    // 객체의 멤버 프로퍼티 읽기
    coco.fly()  // 객체의 멤버 메서드 사용
    coco.sing(3)
}

/*

클래스 본문에는 변수 선언과 같은 방법으로 프로퍼티를 선언했습니다.
이때 프로퍼티는 반드시 초기화되어 있어야 합니다.

 */
