fn main() {
    let g1 = String::from("실수할 줄 아는 사람이 아름답다.");
    show_message(&g1); // 참조 값을 전달
    println!("{}", g1); // 소유권은 이동하지 않음
}

fn show_message(message: &String) {
    println!("{}", message);
}
