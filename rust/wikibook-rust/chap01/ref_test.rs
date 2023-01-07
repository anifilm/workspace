fn main() {
    // 변수 v를 10으로 설정
    let mut v = 10;

    // 함수를 호출
    set_value(&mut v);

    // 변수 v의 값은?
    println!("v: {}", v);
}

// 인수의 값을 100으로 변경하는 함수
fn set_value(arg: &mut u32) {
    *arg = 100;
}
