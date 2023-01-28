// 구조체 Person을 정의
struct Person {
    name: String,
    age: i32,
}

// Person의 메서드를 정의
impl Person {
    // Person을 생성하는 함수를 정의
    fn new(name: String, age: i32) -> Self {
        Person { name, age }
    }
}

fn main() {
    // 연관 함수 new를 이용해 객체 생성
    let lim = Person::new("채영".to_string(), 22);
    // 객체 출력
    println!("{}님의 마음만은 {}살", lim.name, lim.age);
}
