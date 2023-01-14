fn main() {
    let s = "안녕하세요";
    // 첫 번째 1글자를 출력
    let ch = s.chars().nth(0).unwrap();
    println!("{}", ch); // 안
    // 세 번째 1글자를 출력
    let ch = s.chars().nth(2).unwrap();
    println!("{}", ch); // 하
}
