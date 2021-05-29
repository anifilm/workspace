// Person 클래스 정의
// 변경 불가능한 이름(name)
// 변경 가능한 나이(age) 필드를 만들었다.
// (아마도 시간이 지남에 따라 사람들이 나이를 먹기 때문이라고 생각한다.)
class Person(val name: String, var age: Int)

val p = new Person("Dean Wampler", 29)

p.name // name 값을 보여준다.
p.age  //  age 값을 보여준다.

//p.name = "Buck Trends" // 오류! 변경 불가
p.age = 30 // 변경 가능

p.age
