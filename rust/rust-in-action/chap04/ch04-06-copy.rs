fn use_value(_val: Demo) {}

struct Demo {
    a: i32,
}

fn main() {
    let demo = Demo { a: 123 };
    use_value(demo); // 구조체 값의 소유권이 함수의 인자로 이동 됨

    println!("{}", demo.a); // 이동된 소유권으로 인해 값을 사용할 수 없다
}
