fn main() {
    // 문자열 생성
    let s = String::from("beep");
    // 슬라이스 생성
    let ss = &s[0..3];
    // 슬라이스 내용 표시
    println!("{}", ss);
}
