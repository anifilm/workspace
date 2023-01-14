fn main() {
    let pr = "구슬이 서 말이라도 꿰어야 보배";
    // 1바이트씩 출력
    for c in pr.bytes() {
        print!("{:2x} ", c);
    }
    // 바이트 수 구하기
    println!("\n바이트 = {}B", pr.len());
}
