struct Person {
    name: String,
    age: i32,
}

impl Person {
    fn new(name: &str, age: i32) -> Self {
        Self {
            name: name.to_string(),
            age,
        }
    }
}

fn main() {
    // Alex 생성
    let alex = Person::new("Alex", 18);
    // Betty는 Alex를 복사해 이름만 변경
    let betty = Person {
        name: String::from("Betty"),
        ..alex // 갱신 방법
    };
    // Alex와 Betty를 출력
    println!("{},{}", alex.name, alex.age);
    println!("{},{}", betty.name, betty.age);
}
