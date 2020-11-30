// 사용자 클래스에 별명 붙이기
package chap02.section1
import com.example.edu.Person as User

fun main() {
    // com.example.edu의 Person이 User로 대체
    val user1 = User("임채영", 43)
    // 이 파일 안에 있는 Person 클래스의 객체 생성
    val user2 = Person("A123", "정흥규")

    println(user1.name + " " + user1.age)
    println(user2.id + " "+ user2.name)
}

class Person(val id: String, val name: String)
