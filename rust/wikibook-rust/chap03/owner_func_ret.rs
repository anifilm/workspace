fn main() {
    let mut g1 = String::from("실수할 줄 아는 사람이 아름답다.");
    g1 = show_message(g1);
    println!("{}", g1); // ok
}

// String을 받아 String을 반환하는 함수
fn show_message(message: String) -> String {
    println!("{}", message);
    return message;
}
